#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	int prime[n+1];
	for(int i = 1; i <= n; ++i) 
		prime[i] = 1;
	for(int i = 2; i*i < n; ++i) {
			if(prime[i] == 1) {
				for(int j = 2; i*j <= n; j++)
					prime[i*j] = 0;
			}
	}
	for(int i = 2; i <= n; ++i) {
		if(prime[i] == 1)
			printf("%d ", i);
	}

}