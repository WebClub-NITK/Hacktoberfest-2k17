#include<bits/stdc++.h>

using namespace std;

int strlen(char* s){
	int i=0;
	for(;s[i]!='\0';i++);
	return i;
}

void revstr(char* s){
	int len = strlen(s);
	for(int i=0;i<len/2;i++)
		s[i] = s[len-i-1] + s[i] - (s[len-i-1]=s[i]);
}

int main(){
	char* s = new char[10000];
	cin>>s;
	revstr(s);
	for(int i=0;i<strlen(s);i++)cout<<s[i];
	cout<<endl;
	return 0;
}
