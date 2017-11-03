#include<stdio.h>
main()
{
 int i,j,n=0;
 printf("Enter number of elements\n");
 scanf("%d", &n);
 int a[n];
 printf("Enter %d numbers to sort them in ascending order\n", n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("Array before sorting\n");
 for(i=0;i<n;i++)
  printf("%d\n",a[i]);
 for(i=0;i<n;i++)
 {
   for(j=0;j<i;j++)
   {
    if(a[j]>a[j+1])
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
     }
    }
  }
  printf("Array after sorting\n");
 for(i=0;i<n;i++)
  printf("%d\n",a[i]);
 }
