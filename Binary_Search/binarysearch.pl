#!/usr/bin/perl -w
use strict;
my $low = 0;
my $mid;
my $found_key = 0;
my $num;
my $index;
my @array = ( 5, 10, 30, 4, -3, 18, 101, 2001, 46, 23 );
@array = sort { $a <=> $b } @array;
my $high = $#array;
my $key = 18;
while( ( $low <= $high ) && !$found_key ) {
	$mid = ( $low + $high ) / 2;
  	if( $key == $array[$mid] ) {
    	    	$found_key = 1;
    	    	$index = int( $mid );
  	}
  	elsif( $key < $array[$mid] ) {
    		$high = $mid - 1;
  	} else {
		$low = $mid + 1;
  	}
}
if( $found_key ) {
	print "$key is at position: $index\n";
}else {
	print "$key not found\n";
}