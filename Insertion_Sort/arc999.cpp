#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
   int a[10000],n;  
   cout<<"Enter no. of elements :";
   
   cin>>n;
    int i=1,j;
    cout<<"Enter array elemenets";
    for(i=0;i<n;i++)
        {
           cin>>a[i];
        }
 
  for(j=1;j<n;j++)  
    {
        int key = a[j];

        i=j-1;
         while((i>=0) && (a[i]>key))
              {
                    a[i+1]=a[i];
                    i=i-1;
               }
              a[i+1]=key;
   }




 cout<<"\n";
     for(i=0;i<n;i++)
        cout<<" "<<a[i];     

 return 0;


}
