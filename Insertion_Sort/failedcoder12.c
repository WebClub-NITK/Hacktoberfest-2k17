#include <stdio.h>

void p(int a[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", a[i]);
   printf("\n");
}

int insertion(int a[], int n) 
{
  int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = a[i];
       j = i-1;
       while (j >= 0 && a[j] > key)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = key;
   }
}

int main() 
{
	int a[] = {121, 23, 41,123, 124,90,23};
  int n = sizeof(a)/sizeof(a[0]);

  insertion(a, n);
  p(a, n);

  return 0;
}

