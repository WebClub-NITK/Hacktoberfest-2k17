#include<iostream>
#include<string>

using namespace std;

string bi_add(string s1,string s2){
	string short_s = (s1.length()<s2.length())?s1:s2;
	string long_s = (s1.length()<s2.length())?s2:s1;

	string sum_s = '0'+long_s;

	string::reverse_iterator r_itr_short_s = short_s.rbegin();
	string::reverse_iterator r_itr_sum_s = sum_s.rbegin();

	while(r_itr_short_s != short_s.rend()){
		*r_itr_sum_s += *r_itr_short_s - '0';
		if (*r_itr_sum_s > '9')
		{
			*(r_itr_sum_s+1)+=1;
			*r_itr_sum_s -= 10;
		}
		r_itr_sum_s++;
		r_itr_short_s++;
	}

	if(sum_s[0]=='0'){
		sum_s.erase(0,1);
	}
	return sum_s;
}

string bi_sub(string s1,string s2){
	string short_s = (s1.length()<s2.length())?s1:s2;
	string long_s = (s1.length()<s2.length())?s2:s1;
	
	string sub_s = long_s;
	
	string::reverse_iterator r_itr_short_s = short_s.rbegin();
	string::reverse_iterator r_itr_sub_s = sub_s.rbegin();
	string::reverse_iterator r_itr_long_s = long_s.rbegin();
	
	string str = "0";
	while(r_itr_long_s != (long_s.rend()-2)){
		short_s.insert(0,str);
	}
	cout<<endl<<short_s<<endl;
	while(r_itr_short_s != short_s.rend()){
		
		if((*r_itr_sub_s - *r_itr_short_s )<0){
			*(r_itr_sub_s+1) -= 1;
			*r_itr_sub_s +=10;
		}
		*r_itr_sub_s -= *r_itr_short_s - '0';
		r_itr_sub_s++;
		r_itr_short_s++;
	}
	return sub_s;
}

int main()
{
	string n1,n2;
	cin>>n1>>n2;
	cout<<bi_sub(n1,n2)<<endl;
	return 0;
}