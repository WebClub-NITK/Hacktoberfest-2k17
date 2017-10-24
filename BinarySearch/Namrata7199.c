#include<stdio.h>
main()
{
	int i,n,l,h,m,key,f=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);	//sorted
	scanf("%d",&key);
	l=0;
	h=n-1;
	while(l<=h)
	{
		m=(l+h)/2;
		if(a[m]==key)
		{
			printf("Key is at %d position",m+1);
			f=1;
			break;
		}
		else if(a[m]>key)
			h=m-1;
		else if(a[m]<key)
			l=m+1;
	}
	if(f==0)
		printf("Not found");
}