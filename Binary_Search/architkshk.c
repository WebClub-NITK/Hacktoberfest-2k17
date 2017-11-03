#include <stdio.h>

int binarySearch(int *arr, int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
   }
   return -1;
}
 
int main(void)
{
   int n, x, i, result;
   printf("\nEnter Size of Array - ");
   scanf("%d",&n);
   int arr[n];
   printf("\nEnter Element of Array - ");
   for(i=0; i<n; i++)
      scanf("%d",&arr[i]);
   printf("\nEnter Element to be searched - ");
   scanf("%d",&x);
   result = binarySearch(arr, 0, n-1, x);
   (result == -1)? printf("\nElement is not present in array.\n")
                 : printf("\nElement is present at index %d.\n", result);
   return 0;
}