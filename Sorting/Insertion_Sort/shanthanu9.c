#include <stdio.h>
#include <stdlib.h>
 int MAX;
 
void insertion_sort(int * x)
{
    int temp, i, j;
 
    for (i = 1;i < MAX;i++)
    {
        temp = x[i];
        j = i - 1;
        while (temp < x[j] && j >= 0)
        {
            x[j + 1] = x[j];
            j = j - 1;
        }
        x[j + 1] = temp;
    }
}
 
int main()
{
    int i,a[1000];
    printf("Enter the number of elements in the list: ");
    scanf("%d",&MAX);
    printf("Enter elements to be sorted:");
    for (i = 0;i < MAX;i++)
    {
        scanf("%d", &a[i]);
    }
    insertion_sort(a);
    printf("Sorted elements:\n");
    for (i = 0;i < MAX; i++)
    {
        printf(" %d", a[i]);
    }
    return 0;
}
