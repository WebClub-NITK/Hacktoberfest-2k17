#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<long long>
#define pb push_back


int main()
{
	// finds out all prime number untill n
	
	ll n, i, j;
	cout << "This program prints all prime numbers untill a certain number. Enter the upper limit";
	cin >> n;

	vector<bool> v(n + 1, 1); 
	vl prime;
	v[0] = 0;
	v[1] = 0; // 0 and 1 are not prime numbers.

	for(i=2;i<=n;++i)
	{
		if(v[i])
		{
			for(j = 2*i;j<=n;j += i) v[j] = 0;
		}
	}

	for(i=0;i<n;++i)
	{
		if(v[i]) prime.pb(i);
	}

	cout << "Number of primes untill " << n << " = " << prime.size() << "\n";

	for(auto p:prime) cout << p << " ";
	cout << "\n";

	return 0;
}