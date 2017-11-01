#include<stdio.h>
#include<stdlib.h>
int fibonnaciSearch(int *a,int n,int key)
{

	int x=0;
	int y=1;
	int fibM=x+y;
	while(fibM<n)
	{
		x=y;
		y=fibM;
		fibM=x+y;
	}
	int i=0;
	int flag=-1;
	while(fibM>1)
	{
		int p=x+flag;
		if(p<n-1)
		{
			i=p;
		}
		else
		{
			i=n-1;
		}

		if(*(a+i)<key)
		{
			fibM=y;
			y=x;
			x=fibM-y;
			flag=i;
		
		}
		else if (*(a+i)>key)
		{
			fibM=x;
			y=y-x;
			x=fibM-y;
		}

		else
			return i;
	}

	if (x && *(a+(flag+1))==x)
		return flag+1;
	return -1;		//if element is not found
}
int main()
{
	int *a;
	int n,i;
	int x;
	printf("Enter size of array ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(n));

	if(a==NULL)
	{
		printf("Error!");
	}
	else
	{

		printf("Enter the elements of the array\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",a+i);
		}
		printf("Enter element to be searched for ");
		scanf("%d",&x);
		int res=fibonnaciSearch(a,n,x);
		if(res==-1)
		{
			printf("element not found");

		}
		else
		{
			printf("Element found at index %d",res);
		}
	}
}
