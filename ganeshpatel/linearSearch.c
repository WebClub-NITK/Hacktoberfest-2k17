/* A program to search an element in a given array in linear time */

#include <stdio.h>

int search(int a[], int key, int size) {
	int present = 0;
	int index = 0;

	for(; index < size; index++) {
		if(a[index] == key) {
			present = 1;
			break;
		}
	}
	return present;
}

int main() {
	int n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int *arr=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the key to be found\n");
	int key;
	scanf("%d", &key);
	if(search(arr, key, sizeof(arr)/sizeof(arr[0])) == 1) {
		printf("Found\n");
	}
	else {
		printf("Not Found\n");
	}
	return 0;
}

