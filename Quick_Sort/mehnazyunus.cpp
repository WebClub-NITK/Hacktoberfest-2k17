//quicksort
#include<stdio.h>
#include<iostream>
using namespace std;

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int a[], int low, int high) {
	//if(low < high) {
	int piv = a[low];
	int j = high+1;
	for(int i = high; i >low; --i) {
		if(a[i] >= piv) {
			j--;
			swap(a[i], a[j]);
		}
	}
	swap(&a[j-1], &a[low]);
	return j-1;
	
}

void quicksort(int a[], int low, int high) {
	if(low < high) {
		int pi = partition(a, low, high);
		quicksort(a, low, pi-1);
		quicksort(a, pi+1, high);
	}
}

int main () {
	int n, a[100];
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	quicksort(a, 0, n-1);
	for(int i = 0; i < n; ++i)
		cout << a[i] << " ";
}