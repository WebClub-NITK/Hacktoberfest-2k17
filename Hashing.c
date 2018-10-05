#include<stdio.h>
int a[10]={0},i,n,v;

int key(int v );
void hash(int v,int *a);
void search(int v,int *a);
void main()
{
	printf("\nEnter the number of numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number:");
		scanf("%d",&v);
		hash(v,a);
	}

	
	for(i=0;i<n;i++)
	{	printf("\nEnter the number to be searched:");
        	scanf("%d",&v);
		search(v,a);
        }       

}
int key(int v)
{
	return v%10;
}
void hash(int v,int *a)
{	static int  c=0;
       
	if(c<10)
	{	
		if(a[key(v+c)]==0)
		{
		 	a[key(v+c)]=v;
			c=0;
		}
		else
		{	c++;
			hash(v,a);
		}
	}
	else
	{
		printf("\nHash Table is full!!");
	}

}
void search(int v,int *a)
{
        static int  c=0;

        if(c<10)
        {       
                if(a[key(v+c)]==v)
                {
                        printf("\nElement found at position-%d",key(v+c));
                        c=0;
                }
                else
                {       c++;
                        search(v,a);
                }
        }
        else
        {
                printf("\nElement not found!!");
		c=0;
        }


}
