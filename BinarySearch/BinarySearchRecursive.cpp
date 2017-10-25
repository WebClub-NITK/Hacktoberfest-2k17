#include<iostream>
#include<algorithm>
using namespace std;

bool binary_search_recursive(int ar[],int low,int high,int target)
{
	if(low>high)return false;
	int mid=(low+high)/2;
	if(ar[mid]==target)return true;	
	if(ar[mid]>target)return binary_search_recursive(ar,low,mid-1,target);
	return binary_search_recursive(ar,mid+1,high,target);
}

int main()
{
	int ar[100],n,target;
	cout<<"How many elements? (less than hundred)\n";
	cin>>n;
	cout<<"Enter the elements... \n";
	for(int i=0;i<n;++i)cin>>ar[i];
	sort(ar,ar+n);
	
	cout<<"Enter an element for search: ";
	cin>>target;
	
	if(binary_search_recursive(ar,0,n,target))
	cout<<"Found!\n";
	else
	cout<<"Not Found!\n";
	
	return 0;
}
