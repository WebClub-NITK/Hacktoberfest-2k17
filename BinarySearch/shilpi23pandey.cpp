#include<stdio.h>
int binary(int a[],int l,int h,int it)
{
	int mid=(l+h)/2;
	if(l>h)
		return -1;
	if(a[mid]==it)
		return mid;
	else if(a[mid]<it)
		binary(a,mid+1,h,it);
	else 
		binary(a,l,mid-1,it);
}
int main()
{
	int n;
	printf("size :");
	scanf("%d",&n);
	int a[n],i,item;
	printf("Elements :");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Item :");
	scanf("%d",&item);
	int index=binary(a,0,n-1,item);
	if(index!=-1)
		printf("Position :%d",index+1);
	else
		printf("Not found!");
	return 0;
	
}
