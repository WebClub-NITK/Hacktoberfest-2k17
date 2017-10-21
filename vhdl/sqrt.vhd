library ieee; 
use ieee.std_logic_1164.all; 
use IEEE.STD_LOGIC_unsigned.ALL;

entity squart is port( 
clock      : in std_logic;  
data_in    : in std_logic_vector(7 downto 0); 
data_out   : out std_logic_vector(3 downto 0)); end squart;

architecture behaviour of squart is

signal part_done  : std_logic := '0';
signal part_count : integer := 3; 
signal result     : std_logic_vector(4 downto 0) := "00000"; 
signal partialq   : std_logic_vector(5 downto 0) := "000000";

begin   
    part_done_1: process(clock, data_in, part_done)  
    begin
        if(clock'event and clock='1')then
            if(part_done='0')then
                if(part_count>=0)then
                    partialq(1 downto 0)  <= data_in((part_count*2)+ 1 downto part_count*2);
                    part_done <= '1';    else
                    data_out <= result(3 downto 0);    
                end if;    
                part_count <= part_count - 1;
                elsif(part_done='1')then
                    if((result(3 downto 0) & "01") <= partialq)then
                        result   <= result(3 downto 0) & '1';
                        partialq(5 downto 2) <= partialq(3 downto 0) - (result(1 downto 0)&"01");    
                    else 
                        result   <= result(3 downto 0) & '0';
                        partialq(5 downto 2) <= partialq(3 downto 0);                     
                    end if;   
                    part_done  <= '0';
                end if;
            end if;  
        end process;   
    end behaviour;
