#include<iostream>
using namespace std;

int main(){
int a[100], n, ele, low=0, mid, high, pos=-1;
cout<<"Enter the number of elements : ";
cin>>n;
cout<<"Enter the elements : ";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Enter Search element : ";
cin>>ele;
high=n-1;
while(low<=high)
  {
    mid=(low+high)/2;
    if(ele<a[mid])
        high=mid-1;
    else if(ele>a[mid])
        low=mid+1;
    else{
        pos=mid+1;
        break;
    }
  }
if(pos>=0)
cout<<ele<<" found at "<<pos<<"th position";
else
cout<<"Given element not found in the list"<<endl;
}