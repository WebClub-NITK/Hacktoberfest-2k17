#include<iostream.h>
int main()
{
  char str[200], rev[200];
  int n;
  while(true)
  {
   cout<<"Enter the string length"<<endl;
   cin>>n;
   if(n<=200)
    {
      cout<<"Enter the string"<<endl;
      cin>>str;
      for(int j=0;j<n'j++)
        rev[j]=str[n-1-j];
`     cout<<"Reversed String:"<<rev<<endl;
      break;
    }
    else
      cout<<"String length exceeds limit(200), please try again"<<endl;
 }
 return 0;
}
