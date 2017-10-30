#include<iostream>
using namespace std;

int main(){
  int a[100], n, ele, first=0, mid, last, pos=-1;
  cout<<"Enter the number of elements : ";
  cin>>n;
  for(int i=0;i<n;i++){
	cout<<"Enter the elements : ";
	cin>>a[i];
  }
  cout<<"Enter Search element : ";
  cin>>ele;
  last=n-1;
  while(first<=last)
  {
    mid=(first+last)/2;
    if(ele<a[mid])
        last=mid-1;
    else if(ele>a[mid])
        first=mid+1;
    else{
        pos=mid+1;
        break;
    }
  }
  if(pos>=0)
  cout<<ele<<" found at "<<pos<<"th position";
  else
  cout<<"Given element not found in the list"<<endl;
  return 0;
}