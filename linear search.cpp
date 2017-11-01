#include<iostream.h>

void main()
{
int a[20], n, m;
cout<<"\n Enter the size of the array(<20): ";
cin>>n;
cout<<"\n Enter the elements:";

for(int i=0; i<n; ++i)
{
cin>>a[i];
}

cout<<"\n Enter the element to be searched for:";
cin>>m;

for(i=0; i<n; i++)
if(a[i]==m)
cout<<"\n Found! At the position"<<i+1;

}
