#include<stdio.h>
#include<string. h>
 void main()
 {
     char s[100];
     char ch;
     int l,i;
     printf("Enter string:");
     scanf("%s",s);
     l=strlen(s);
     for(i=0;i<l/2;i++){
         ch=s[i];
         s[i]=s[l-i-1];
         s[l-i-1]=ch;
     }
     printf("\nReverse string: %s",s);
 }
