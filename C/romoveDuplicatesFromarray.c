/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]
Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]
INPUTS: Integer array and length of the array .
OUTPUT: Update input array by removing duplicate values and return the final array length
ERROR CASES: Return -1 for invalid inputs.
NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>
#include<malloc.h>
int removeArrayDuplicates(int *Arr, int len)
{
	
	int *resultArr, flag = 0;
	resultArr = (int *)malloc(len * sizeof(int));
	if (Arr == NULL && len != 0)
		return -1;
	if (len < 0)
		return -1;
	int i, j, k = 1;
	resultArr[0] = Arr[0];
	for (i = 1; i<len; i++)
	{
		flag = 0;
		for (j = 0; j<k; j++)
		{
			if (Arr[i] == resultArr[j])
				flag = 1;
		}
		if (flag == 0)
		{
			resultArr[k] = Arr[i];
			k++;
		}
	}
	for (i = 0; i < k; i++)
		Arr[i] = resultArr[i];
	return k;

}
