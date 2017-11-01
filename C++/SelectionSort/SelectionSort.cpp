//Selection Sort implementation in CPlusPlus
#include <iostream>
using namespace std;
int main()
{
	int a[] = { 4,60,1,98,56 };
	int n = sizeof(a) / sizeof(a[0]);
	int min, i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (i = 0; i<n; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}
