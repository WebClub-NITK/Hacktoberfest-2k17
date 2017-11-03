#include<stdio.h>
int main()
{
  int n,i,a[50],j,f;
  printf("enter the no of array elements\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  for (i=1;i<n;i++)
   {
       f=a[i];
       j=i-1;
       while(j>=0 && a[j]>f)
       {
           a[j+1]=a[j];
           j=j-1;
       }
       a[j+1]=f;
   }
   printf("elemets after sorting\n");
   for(i=0;i<n;i++)
     printf("%d\n",a[i]);
 }
