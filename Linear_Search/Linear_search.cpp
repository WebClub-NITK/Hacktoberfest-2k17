//C++ program for linear search
#include<iostream>
using namespace std;
//Linear search function 
//Return index if element found else return -1
int search(int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (arr[i] == x)
         return i;
    }
    return -1;
}

//Driver program
int main()
{
	cout<<"Enter the size of the array"<<endl;                 //Declaring array
	int size;
	cin>>size; 
	for(int i=0;i<size;i++)
	{
            cin>>a[i];                                           //Enter the elements of array
	}
	//calling search function
	int p = search(a, size,key);                            // key is any number that you want to search
	if(p!=-1)
	{
	    cout<<"Element found";
	}
	else
	{
	    cout<<"Element not found";
	}
	return 0;
}
