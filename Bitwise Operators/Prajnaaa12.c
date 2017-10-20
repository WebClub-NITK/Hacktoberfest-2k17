#include<stdio.h>
main()
{
  int a=10, b=20;
  printf("Bitwise operations");
  printf("Bitwise AND\n 10&20=%d",(a & b));
  printf("Bitwise OR\n 10|20=%d",(a | b));
  printf("Bitwise XOR\n 10^20=%d",(a ^ b));
  printf("Bitwise NOT\n ~10=%d",(~a));
  printf("10 shifted left by 2 places: %d",(a<<2));
  printf("20 shifted right by 2 places: %d",(b>>2));
}
