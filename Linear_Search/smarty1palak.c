#include<stdio.h>
int main()
{
  int n,i,a[50],j,c=0,key;
  printf("enter the no of array elements\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  printf("enter the element to be searched\n");
    scanf("%d",&key);
  for(i=0;i<n;i++)
   {
      if(a[i]==key)
       {
          c=1;
          goto l;
       }
   }
   l:
   if(c==1)
     printf("element found at position %d\n",i+1);
   else
     printf("element not found\n");
  return 0;
}
 
