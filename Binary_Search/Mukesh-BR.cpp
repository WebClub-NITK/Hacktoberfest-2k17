#include <iostream>

using namespace std;

int main()
	{
		int lb=0;
		int n;
		cout<<"Enter number of elements : ";
		cin>>n;
		int ub=n;
		int mid;
		int a[100];
		cout<<"Enter the elements : ";
		for(int i=0;i<n;i++)
            cin>>a[i];
		long number;
		int pos=-1;
		cout<<"Enter Number :";
		cin>>number;
		cout<<"\n\n";
		while(lb<=ub)
		{
			mid=(ub+lb)/2;
			if(a[mid]==number)
			{
				pos=mid;
				break;
			}
			else if(a[mid]<number)
				lb=mid+1;
			else if(a[mid]>number)
				ub=mid-1;
		}
		if(pos==-1)
			cout<<"Number not found ";
		else
			cout<<"Number found in position : "<<pos+1;
	}
