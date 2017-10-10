#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("Enter a String : ");
	gets(s);
	printf("The Reverse of the String is : ");
	printf("%s\n",strrev(s));
	return 0;
}
