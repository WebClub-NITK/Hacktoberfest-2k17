#include <stdio.h>

main() {

   unsigned int a = 68;	
   unsigned int b = 15;
   int c = 0;           

   c = a & b;      
   printf("Value of c is %d\n", c );

   c = a | b;    
   printf("Value of c is %d\n", c );

   c = a ^ b;       
   printf("Value of c is %d\n", c );

   c = ~a;          
   printf("Value of c is %d\n", c );

   c = a << 2;   
   printf("Value of c is %d\n", c );

   c = a >> 2;     
   printf("Value of c is %d\n", c );
}
