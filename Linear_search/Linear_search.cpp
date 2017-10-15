//C++ program for linear search
#include<iostream>
using namespace std;
//Linear search function 
//Return index if element found else return -1
int search(int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)
         return i;
    return -1;
}

//Driver program
int main()
{
	int a[]={22,34,11,56,432,44};                  //Declaring array
	int size = sizeof(a)/sizeof(a[0]);             // finding numbers of elements in array 
	//calling search function
	int p = search(a, size,11);
	if(p!=-1)
	cout<<"Element found";
	else
	cout<<"Element not found";
	return 0;
}
