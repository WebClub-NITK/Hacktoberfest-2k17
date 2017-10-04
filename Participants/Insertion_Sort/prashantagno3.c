#include<stdio.h>
void InsSort(int a[],int n);
int main()
{
 int n,i;
 scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
 InsSort(arr,n);
 for(i=0;i<n;i++)
  printf("%d\n",arr[i]);
 return 0;
}
void InsSort(int a[],int n)
{
 int i,j,t;
 for(i=1;i<n;i++)
   for(j=0;j<i;j++)
    {
       if(a[i]<a[j])
	{
  	  t=a[i];
	  a[i]=a[j];
	  a[j]=t;
	}
    }
}

 
 
