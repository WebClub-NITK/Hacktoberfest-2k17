#include <stdio.h>
 
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void bubbleSort(int arr[], int n)
{
   int i, swapped;
   
   swapped = 1;
   while (swapped)
   {
      swapped = 0;
      for (i = 0; i < n - 1; i++)
      {
          if (arr[i] > arr[i + 1])
          {
              swap(&arr[i], &arr[i + 1]);
              swapped = 1;
          }
      }          
   }
}
 
void printArray(int arr[], int size)
{
    int i;

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[] = {32, 1, 89, 54, 9, 7, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array:\n");
    printArray(arr, n);
    return 0;
}