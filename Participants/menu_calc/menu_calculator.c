#include<stdio.h>
int main()
{
 char ch;
 printf("Enter your choice:\n1.Addition +\n2.subtraction -\n3.Multiplication *\n4.Division /\n");
 scanf("%c",&ch);
 float a,b,res;
 printf("Enter the 2 operands: ");
 scanf("%f%f",&a,&b);
 switch(ch)
{
  case '+': res=a+b;
	  break;
  case '-': res=a-b;
	  break;
  case '*': res=a*b;
	  break;
  case '/': res=a/b;
	  break;
  default: 
	  printf("\ninvalid choice");
  }
printf("result=%.2f\n",res);
return 0;
} 
 
 
