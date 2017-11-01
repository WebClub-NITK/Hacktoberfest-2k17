#include<stdio.h>
int partition (int a[], int l, int h)
{
   int pivot,i,j,t;
    pivot = a[h];    
    i = (l-1); 
    for (j=l;j<=h-1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;  
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    t=a[i+1];
    a[i+1]=a[h];
    a[h]=t;
    return (i + 1);
}
void quickSort(int a[], int l, int h)
{
   int p;
    if (l< h)
    {
        p = partition(a, l, h);
        quickSort(a,l, p-1);
        quickSort(a, p + 1, h);
    }
}
int main()
{
  int n,i,a[50],j,f;
  printf("enter the no of array elements\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  quickSort(a, 0, n-1);
  printf("array after sorting\n");
  for(i=0;i<n;i++)
    printf("%d\n",a[i]);
  return 0;
}
