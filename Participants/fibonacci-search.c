#include <stdio.h>
int min(int x, int y)
{
    if (x<y)
        return x;
    else
        return y;
}
void main()
{
    int fib_arr[100];
    int start = 0;
    int mid = 1;
    int end = 2;
    fib_arr[start] = 0;
    fib_arr[mid] = 1;
    fib_arr[end] = 1;
    int n, i, elem;
    do
    {
        printf("\nEnter the number of elements in the sorted array\n");
        scanf("%d", &n);
    }
    while(n<=0);

    int arr[n];

    for (i=0; i<n; ++i)
    {
        printf("\nEnter the element at position %d\n", i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray is ... ");
    for (i=0; i<n; ++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\nEnter the element to search for\n");
    scanf("%d",&elem);


    while (fib_arr[end] < n)
    {
        ++end;
        ++start;
        ++mid;
        fib_arr[end] = fib_arr[start]+fib_arr[mid];
    }

    int offset = 0, flag = -1;

    while (flag==-1 && start>=0)
    {
        int index = min(offset+fib_arr[start], n);
        if (arr[index] == elem)
            flag = index;
        else if (elem > arr[index])
        {
            --start;
            --mid;
            --end;
            offset = index;
        }
        else
        {
            start-=2;
            mid-=2;
            end-=2;
        }

    }
    printf("\nElement found at index %d", flag);
}

