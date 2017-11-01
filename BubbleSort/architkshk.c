#include <stdio.h>
void swap(int *a, int *b);
void bubbleSort(int arr[], int n);

int main(void)
{
    int n, i;
	printf("\nEnter Size of Array - ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter Element of Array - ");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
    bubbleSort(arr, n);
    printf("\nSorted array: \n");
    for(i=0; i<n; i++)
		printf("%d\t",arr[i]);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)
   	{	
   		for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
    }
}
