#include<stdio.h>
int main()
{
	int temp,i,j;
	int data[10]={1,6,2,88,32,7,0,3,12,55};
	for(i=1;i<10;i++)
	{
		temp = data[i];
		j=i-1;
		while(temp<data[j] && j>=0)
		{
			data[j+1] = data[j];
			--j;
		}
		data[j+1]=temp;
	}
	printf("In ascending order: ");
	for(i=0; i<10; i++)
    printf("%d ",data[i]);
    return 0;
}
