#include<stdio.h>


void input_array(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}


void print_array(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
}

void insertion_sort(int a[],int n)
{
	int i,j,key;
	for(j=1;j<n;j++)
	{
		key = a[j];
		i = j-1;
		while(i>=0 && a[i]>key)
		{
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = key;
	}
}


main()
{
	int n;
	int a[30];
	printf("How many nos....\n");
	scanf("%d",&n);
	printf("Enter %d elements...\n",n);
	input_array(a,n);
	printf("Elements are....\n");
	print_array(a,n);
	printf("\nSorted elements are....\n");
	insertion_sort(a,n);
	print_array(a,n);
	printf("\n");
}
