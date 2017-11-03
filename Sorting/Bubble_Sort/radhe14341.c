#include<stdio.h>
#define MAX 100
int main()
{
	int a[MAX],i,j,t,n,xchange;
	printf("Enter the number of element : ")	;
	scanf("%d",&n);
	printf("Enter the elements of the array ");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
	/*Bubble Sort*/
	for(i=0;i<n-1;i++)
	{
		xchange=0;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				xchange++;
			}
		}
		if(xchange==0)
		break;
	}
	printf("Sorted list is : \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}