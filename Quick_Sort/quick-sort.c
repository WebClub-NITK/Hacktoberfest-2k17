#include <stdio.h>

void quicksort(int arr[], int start, int end)
{
    int pivot = start;
    int actual_start = start;
    int actual_end = end;
    while (start<end)
    {
        if (pivot == start)
        {
            if (arr[end]<arr[pivot])
            {
                int temp = arr[end];
                arr[end] = arr[pivot];
                arr[pivot] = temp;
                pivot = end;
            }
            else
                --end;
        }
        else
        {
            if (arr[start]>arr[pivot])
            {
                int temp = arr[start];
                arr[start] = arr[pivot];
                arr[pivot] = temp;
                pivot = start;
            }
            else
                ++start;
        }
    }
    if (actual_start!=pivot)
        quicksort(arr, actual_start, pivot-1);
    if (actual_end!=pivot)
        quicksort(arr, pivot+1, actual_end);
}

void main()
{
    int n, i;
    do
    {
        printf("\nEnter the number of elements\n");
        scanf("%d",&n);
    }
    while (n<=0);

    int arr[n];

    for (i=0; i<n; ++i)
    {
        printf("\nEnter the element at position %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nArray is ... ");
    for (i=0; i<n; ++i)
    {
        printf("%d ",arr[i]);
    }

    quicksort(arr, 0, n-1);

    printf("\nQuick-sorted array is ... ");
    for (i=0; i<n; ++i)
    {
        printf("%d ",arr[i]);
    }
}

