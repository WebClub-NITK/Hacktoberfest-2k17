#include <stdio.h>

int main(){
	int temp,max,i,j,size,a[1000];

	printf("Size of the array: ");
	scanf("%d",&size);
	printf("Insert the elements \n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	} 								//Adds elements to the array


	
	for(i=0;i<size;i++)
	{
		for (int j = 0; j < size-i; ++j)
		{
			if(a[j]>a[j+1])
			{
					
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}

	}
	printf("The sorted elements are : \n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d ",a[i]);
	}
	return 0;

}
