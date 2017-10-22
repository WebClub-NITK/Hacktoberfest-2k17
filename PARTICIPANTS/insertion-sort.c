#include <stdio.h>
void main()
{
    int num = 0;
    int i;

    do
    {
        printf("\nEnter the number of elements\n");
        scanf("%d", &num);
    }
    while (num<=0);

    int arr[num];

    for (i = 0; i < num; ++i)
    {
        printf("\nEnter the element at position %d\n", i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nOriginal array is...{ ");
    for (i = 0; i < num; ++i)
        printf("%d ",arr[i]);
    printf("}");

    for (i = 1; i < num; ++i)
    {
        int element = arr[i];
        int j = i;
        while (element < arr[j-1] && j!=0)
        {
            arr[j] = arr[j-1];
            j-=1;
        }
        arr[j] = element;
    }

    printf("\nInsertion-sorted array is...{ ");
    for (i = 0; i < num; ++i)
        printf("%d ",arr[i]);
    printf("}");
}
