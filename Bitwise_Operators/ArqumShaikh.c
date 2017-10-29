/*bitwise operator*/
#include<stdio.h>
int main(void)
{
int a,b,c,d,e,p,q;
printf("please enter two numbers:\n");
scanf("%d%d",&a,&b);
c=a&b;
d=b|a;
e=a>>b;
p=b^a;
 q=b<<3;
printf("c=%d,d=%d,e=%d,p=%d,q=%d\n",c,d,e,p,q);
return 0;
}

