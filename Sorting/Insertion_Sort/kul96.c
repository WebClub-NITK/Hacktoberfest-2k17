#include<stdio.h>
int main()
{
    // Getting Input
    int n;
    printf("Enter value of n = ");
    scanf("%d",&n);
    int seq[n];
    printf("\n Enter %d elements \n\t",n);
    for(int i=0;i<n;i++)
    {
        printf("\n Element %d = ",i+1);
        scanf("%d",&seq[i]);
    }
    printf("\n Initial List: ");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",seq[i]);
    }

    //Insertion Sort Algorithm
	for(int j=1; j<= (n-1); j++)
	{
		int key = seq[j];
		int i = j-1;
		while((i>=0) && (seq[i]>key))
		{
			seq[i+1] = seq[i];
			i = i-1;
		}
		seq[i+1] = key;
	}

    //Output
    printf("\n The Sorted List: ");
	for(int i=0;i<n;i++)
	{
		printf("\t%d",seq[i]);
	}
return 0;
}