#include<iostream>
using namespace std;
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

int main()
{
	cout<<"Enter the size of the array"<<endl;                
	int size;
	cin>>size; 
	for(int i=0;i<size;i++)
	{
            cin>>a[i];                                          
	}
	int p = search(a, size,key);                            
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
