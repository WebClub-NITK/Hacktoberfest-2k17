#include<iostream>
using namespace std;
int main()
{
  int n,*a,temp;
  cin>>n;
  a=(int *)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
        cin>>a[i];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n-i;j++)
        {
            if(a[j]>=a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }

        }
  }
  for(int i=0;i<n;i++)
    cout<<a[i]<<"  ";
  return 0;
}
