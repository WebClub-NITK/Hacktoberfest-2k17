#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i,j,mid,high,low,size,key;
	int a[1000];
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	printf("Enter the elements in the array\n");
	for ( i = 0; i < size; ++i)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the element to be searched\n");
	scanf("%d",&key);

	for(i=0;i<size;i++){
		if(a[i]==key){
			printf("The key %d is found at index %d \n",key,i+1);
			exit(0);
		}

	}
	printf("The key is not found in the array\n");
	return 0;
}