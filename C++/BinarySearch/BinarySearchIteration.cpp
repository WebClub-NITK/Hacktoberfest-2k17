
//Binary Search in CPlusPlus using iteration
#include <iostream>
using namespace std;
int binarysearch(int arr[], int first, int last, int item)
{
	while (first < last)
	{
		int mid = (first + last) / 2;
		if (arr[mid] == item)
			return mid;
		else if (arr[mid] > item)
			last = mid - 1;
		else
			first = mid + 1;
	}
}

int main()
{
	int arr[] = { 2,5,6,11,23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int item = 23;
	int result = binarysearch(arr, 0, n - 1, item);
	if (result == -1)
		cout << "Element is not present";
	else
		cout << "Element is present at position " << result;
	return 0;
}
