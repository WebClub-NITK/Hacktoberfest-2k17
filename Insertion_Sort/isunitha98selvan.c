#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int *a,int n)
{
	int i=1;
	int j;
	while(*(a+i))
	{
		j=i;
		while(j>0 && *(a+j-1)>*(a+j))
		{
			int temp=*(a+j-1);		//swapping the elements
			*(a+j-1)=*(a+j);
			*(a+j)=temp;
			j=j-1;
		}
		i=i+1;
	}
}
void display(int *a,int n)
{
	int i=0;
	while (*(a+i))
	{
		printf("%d ",*(a+i));
		i++;
	}
}
int main()
{
	int n,i;
	int *a;
	printf("Enter size of the array ");
	scanf("%d",&n);
	a=(int*)malloc(n*(sizeof(int)));
	printf("Enter elements of the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	insertion_sort(a,n);
	printf("Displaying sorted array\n");
	display(a,n);

}