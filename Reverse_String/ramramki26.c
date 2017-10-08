#include<iostream>
int main()
{
  char str[50],rev[50];
  int n,i;
  cout<<"Enter number of characters in string"<<endl;
  cin>>n;
  if(n<=50)
  {
   cout<<"Enter the elements"<<endl;
   cin>>str;
   for(i=0;i<n;i++)
   {
    rev[i] = str[n-1-i]
   }
   cout<<rev;
  }
  else
  cout<<"Too many characters";
  return 0;
}  
