#include<bits/stdc++.h>
using namespace std;

int main()
{
  int A[10000], N, i;

  cin>>N;
  for(i=0; i<N; i++)
    cin>>A[i];

  int num = 1<<N;

  int j;

  for(i=0; i<num; i++)
  {
    cout<<"\n";
    for(j=0; j<N; j++)
      if((i>>j)%2)
        cout<<A[j]<<" ";
  }

  return 0;
}
