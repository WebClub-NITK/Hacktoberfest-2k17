#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
void insertionsort(int arr[], int N) {
    for(int i = 1; i < N; i++) {
        int j = i - 1;
        int temp = arr[i];

        while(j >= 0 && temp < arr[j]) {
            arr[j + 1] = arr[j];
            j--;;
        }

        arr[j + 1] = temp;
        printf("After pass %d  : ", i);
        //Printing array after pass
        printArray(arr, N);
    }
}
int main() {
    int arr[] = {10, 7, 3, 1, 9, 7, 4, 3};
    int len = sizeof(arr) / sizeof(int);
    printf("Initial Array : ");
    printArray(arr, len);
    insertionsort(arr, len);
    return 0;
}
