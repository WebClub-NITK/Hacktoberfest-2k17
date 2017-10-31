#include<bits/stdc++.h>
using namespace std;

void LIS(int a[], int n){

  vector< vector<int> > lis;

  for(int i = 0; i<n; i++)
    lis.push_back({});

  lis[0].push_back(a[0]);

	for(int i=1;i<n;i++)
  {
		for(int j=0;j<i;j++)
    {
			if(a[i]>a[j] && lis[j].size() >= lis[i].size())
				lis[i] = lis[j];
  	}
	   lis[i].push_back(a[i]);
	}

	vector<int> max;
	max = lis[0];
	for(int i=1;i<n;i++)
  {
		if(lis[i].size() > max.size())
			max = lis[i];
	}
	cout<<"Longest Increasing subsequence: ";
	for(int i=0;i<max.size();i++){
		cout<<max[i]<<" ";
	}
}

int main()
{ int a[100], N;
	cout<<"Enter no. of elements: ";
	cin>>N;

	cout<<"Enter Sequence : ";
	for(int i=0;i<N;i++)
    cin>>a[i];

	LIS(a, N);
	return 0;
}
