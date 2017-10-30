#include <stdio.h>

int main() {
	int t,i,n[100],j,k,a[100][1000],l;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	scanf("%d",&n[i]);
	for(j=2;j<n[i];j++)
	a[i][j]=1;
	}
	for(j=0;j<t;j++)
	{
	  for(i=2;i<n[j];i++)
	  {
	    if(a[j][i]!=0)
	    {
	      printf("%d ",i);
	      l=2;
	    while(i*l<n[j])
	    {
	            a[j][i*l]=0;
	            l++;
	    }
	   }
	  }
	  printf("\n");
	}
	return 0;
}
