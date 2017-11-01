#include<iostream.h>
#include<conio.h>
using namespace std;
int main()
{
  int n,temp;
  int a[200];
  while(true)
  {
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    if(n<=200)
    {
      cout<<"Enter the elements"<<endl;
      for(int i=0;i<n;i++)
        cin>>a[i];
      for(int j=n-1;j>0;j--)
      {
        for(int k=0;k<j;k++)
        {
          if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
        }
      }
      cout<<"The sorted elements are:";
      for(int l=0;l<n;l++)
        cout<<" "<<a[l];
      break;
    }
    else
      cout<<"Number of elements exceeds limit(200). Please try again."<<endl;
  }
return 0;
}
  
