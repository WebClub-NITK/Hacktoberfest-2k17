#include<stdio.h>
#include<conio.h>
 
void quick_sort(int arr[20],int,int);
 
void main()
{
 int arr[20],n,i;
 printf("Enter the number of elements in the Array: ");
 scanf("%d",&n);
 printf("\nEnter %d elements:\n\n",n);
 
 for(i=0 ; i<n ; i++)
 {
  printf(" Array[%d] = ",i);
  scanf("%d",&arr[i]);
 }
 
 quick_sort(arr,0,n-1);
 printf("\nThe Sorted Array is:\n\n");
 
 for(i=0 ; i<n ; i++)
 {
  printf(" %4d",arr[i]);
 } 
}
 
void quick_sort(int arr[20],int low,int high)
{
 int pivot,j,temp,i;
 if(low<high)
 {
  pivot = low;
  i = low;
  j = high;
 
  while(i<j)
  {
   while((arr[i]<=arr[pivot])&&(i<high))
   {
    i++;
   }
 
   while(arr[j]>arr[pivot])
   {
    j--;
   }
 
   if(i<j)
   { 
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
  }
 
  temp=arr[pivot];
  arr[pivot]=arr[j];
  arr[j]=temp;
  quick_sort(arr,low,j-1);
  quick_sort(arr,j+1,high);
 }
}	