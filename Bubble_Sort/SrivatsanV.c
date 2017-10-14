#include <stdio.h>

//ascending order

void main(){
  int a[100],i,j,n;
  printf("enter the limit of array");
  scanf("%d",&n);
  printf("Enter numbers : ");
  for(i=0;i<n;i++)
   scanf("%d ",&a[i]);
  
  for(i=0;i<n-1;i++){
    for(j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
           temp=a[j];
           a[j]=a[j+1]; 
           a[j+1]=temp;
        }
     }

  }
  
  printf("Sorted array : \n");
  for(i=0;i<n;i++)
   printf("%d ",a[i]);
}