/* C Program - Binary Search */
		
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n, i, arr[50], search, first, last, middle;
	printf("Enter total number of elements :");
	scanf("%d",&n);
	printf("Enter %d number :", n);
	for (i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to find :");
	scanf("%d", &search);
	first = 0;
	last = n-1;
	middle = (first+last)/2;
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
		middle = (first + last)/2;
	}
	if(first > last)
	{
		printf("Not found! %d is not present in the list.",search);
	}
	getch();
}
