#include <stdio.h>
#include <stdlib.h>s




void merge(int[],int[],int[]);
void mergesort(int[]);

int main()
{
	int n,i;
	printf("Enter the number of elements in the array\n");
	scanf("%d", &n);
	int * arr = (int*)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	arr[i]='\0';
	mergesort(arr);
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void merge(int L[], int R[], int A[])
{
	int nl= sizeof(L)/sizeof(L[0]),nr= sizeof(R)/sizeof(R[0]);
	int i=0,j=0,k=nl;
	printf("%d\n", L[0]);
	// while(i<nl && j<nr)
	// {
	// 	if (L[i] == R[j])
	// 	{
	// 		A[k] = L[i];
	// 		i++; j++; k++;
	// 	}
	// 	else if(L[i] < R[j])
	// 	{
	// 		A[k] = L[i];
	// 		k++; i++;
	// 	}
	// 	else
	// 	{
	// 		A[k] = R[j];
	// 		k++;j++;
	// 	}
	// }
	while (i < nl && j < nr)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
	while(i<nl)
	{
		A[k] = L[i];
		k++; i++;
	}
	while(i<nr)
	{
		A[k] = R[j];
		k++; j++;
	}
}

void mergesort(int A[])
{
	int i,mid,n;
	n = sizeof(A)/sizeof(A[0]);
	if(n<2)
	{
		return;
	}
	mid  = n/2;
	int L[mid];
	int R[n-mid];
	for(i=0;i<mid;i++)
	{
		L[i] = A[i];
	}
	for(i=0;i<n-mid;i++)
	{
		R[i]= A[mid+1+i];
	}
	mergesort(L);
	mergesort(R);
	merge(L,R,A);
}