#include<bits/stdc++.h>
#include<climits>
using namespace std;

int freq(int a[], int n, int key)
{ int f = 0;
  for(int i=0; i<n; i++)
    if(a[i] == key)
    f++;
  return f;
}

int majority(int *A,int n)
{
  if(n==0)
    return INT_MIN;
  else if(n==1)
    return A[0];
  else if(n==2)
  {
    if(A[0]==A[1])
      return A[0];
    else
      return INT_MIN;
  }
  int *temp = new int[n];
  int j=0;
  // i+=2 because we need to make only n/2 pairs
  for(int i=0;i<n-1;i+=2)
  {
      if(A[i]==A[i+1])
        temp[j++] = A[i];
  }
  if(n%2 == 1)
    {
      if(freq(A, n, A[n-1])>n/2)
        return A[n-1];
    }

  return majority(temp, j);

}

int main()
{
  int n;
  cout<<"\nEnter the number of elements : ";
  cin>>n;
  int *A = new int[n];
  cout<<"\nEnter the elements :";
  for(int i=0;i<n;i++)
    cin>>A[i];
  int max = majority(A, n);
  if(max==INT_MIN)
    cout<<"\nThe array does not have an majority element.";
  else
    cout<<"\nThe majority element is :"<<max<<".\n";
  return 1;
}
