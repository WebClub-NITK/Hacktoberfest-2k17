#include <stdio.h>
#include<stdlib.h>
 
int main(int ante)
{
   float c, first, last, middle, n, search, array[100];
 
   printf("Enter number of elements\n");
   scanf("%f",&n);
 
   printf("Enter %f integers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%f",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%f found at location %f.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %f is not present in the list.\n", search);
 
   return 0;   
}
