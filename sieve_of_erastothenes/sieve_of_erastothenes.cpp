#include<iostream>
#include<stdio.h>

using namespace std;

int main()
  {
       int p[10000],n;
       cout<<"Enter N:";
       cin>>n;
      p[2]= 1;
        for(int k=2;k<=n;k++)
          {
               p[k]=1;
          }
        for(int i=2;i*i<=n;i++)
             {
                  if(p[i]==1)
                    {
                          for(int j=2*i;j<=n;j+=i)
                             p[j]=0;
                    }
            }
      cout<<"The prime numbers upto n are :";
       for(int i=2;i<=n;i++)
          {
                if(p[i]==1)
                  cout<<i<<" ";
          }
 return 0;
 }

