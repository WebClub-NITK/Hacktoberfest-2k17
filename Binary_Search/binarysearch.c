#include<stdio.h>
void binary_search(int search,int n,int arr[])
{
	int first,last,middle;
	first = 0;
	last = n-1;
	middle = (first+last)>>1;
	while (first <= last)
	{
		if(arr[middle] < search)
		{
			first = middle + 1;

		}
		else if(arr[middle] == search)
		{
			printf("%d found at location %d\n", search, middle+1);
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)>>1;
	}
	if(first > last)
	{
		printf("Not found! %d is not present in the list.",search);
	}first = 0;
	last = n-1;
	middle = (first+last)>>1;
	while (first <= last)
	{
		if(arr[middle] < search)
		{
			first = middle + 1;

		}
		else if(arr[middle] == search)
		{
			printf("%d found at location %d\n", search, middle+1);
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)>>1;
	}
	if(first > last)
	{
		printf("Not found! %d is not present in the list.",search);
	}
}
int main()
{
	int n, i, arr[50], search;
	printf("Enter total number of elements :");
	scanf("%d",&n);
	printf("Enter %d number :", n);
	for (i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to find :");
	scanf("%d", &search);
	binary_search(search,n,arr);
	return 0;
}
