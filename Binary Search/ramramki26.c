#include<iostream>
int main()
{
 int a[20],beg,mid,end,n,i,ele,c=-1;
 cout<<"Enter number of elements"<<endl;
 cin>>n;
 cout<<"Enter the elements"<<endl;
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cout<<"Enter search element"<<endl;
 cin>>ele;
 for(i=n-1;i>0;i--)
 {
  for(int j=0;j<i;j++)
  {
   int t;
   a[j]=t;
   a[j]=a[j+1};
   a[j+1]=t;
  }
 }
 beg=0;
 end=n-1;
 while(beg<=end)
 {
  mid=(beg+end)/2;
  if(ele>a[mid])
  {
   beg=mid+1;
  }
  else if(ele<a[mid])
  {
   end=mid-1;
   }
  else 
  {
   c=mid;
   break;
  }
 }
 if(c==-1)
 cout<<ele<<" not found";
 else
 cout<<ele<" found at position"<<(c+1);
 return 0;
} 

