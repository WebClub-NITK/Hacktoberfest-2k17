#include<stdio.h>
int main()
{
	int end,beg,ele,i,mid,a[50],flag=0,n;
	
	printf("ENTER THE NUMEBER OF ELEMENTS\n");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS\n");
	scanf("%d",&a[0]);
	
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i]<a[i-1])
		{
			printf("INVALID INPUT\n");
			i--;
			
		}
		
		
	}
	

printf("ENTER THE ELEMENT TO BE SEARCHED\n");
scanf("%d",&ele);
end=n-1;
beg=0;

while(beg<=end)
{
	mid=(beg+end)/2;
	if(ele==a[mid])
	{
		printf("SEARCH SUCCESSFUL");
		flag=1;
		break;
	} 
	else if(ele<a[mid])
	end=mid-1;
	else
	beg=mid+1;

}
if(flag)
printf("THE ELEMENT IS PRESENT AT POSITION:\t%d",mid+1);
else
printf("SEARCH UN SUCCESSFUL\n");
return 0;
}
