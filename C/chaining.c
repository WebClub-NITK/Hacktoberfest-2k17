#include<stdio.h>

typedef struct
{
	int subpartID;
	int cost_per_day;
	int duration;
}subpart_data;

typedef struct
{
	int predecessorID;
	int successorID;
}dependency_info;

typedef struct 
{
	subpart_data x;
	subpart_data y;
}pairs;

void getans(subpart_data array[],int i,int j,int *cost,int *day)
{	
	*cost = *day = 0;
	for(;i<=j;i++)
	{
		*cost+=array[i].cost_per_day;
		*day+=array[i].duration;
	}
}

void merge(subpart_data *A,int n,subpart_data *B,int m)
{
	int i=0,j=0;
	subpart_data C[n+m];
	while(i<n&&j<m)
	{
		if(A[i].cost_per_day*B[j].duration>A[i].duration*B[j].cost_per_day)
		{
			C[i+j] = A[i];
			i++;
		}
		else
		{
			C[i+j] = B[j];
			j++;
		}
	}


	while(i<n)
	{
		C[i+j] = A[i];
		i++;
	}
	while(j<m)
	{
		C[i+j] = B[j];
		j++;
	}

	for(i=0;i<n+m;i++)
	A[i] = C[i];
}


void mergesort(subpart_data *A,int k)
{
	if(k<2)
	return;

	mergesort(A,k/2);
	mergesort(A+k/2,k-k/2);
	merge(A,k/2,A+k/2,k-k/2);
}

void print_schedule(subpart_data *B, int k)
{	
	subpart_data A[k];
	int i;
	for(i=0;i<k;i++)
	A[i] = B[i];

	mergesort(A,k);
	int cost = 0;
	int time = 0;
	for(i=0;i<k;i++)
	{
		time+=A[i].duration;
		cost+=time*A[i].cost_per_day;
	}

	printf("cost=%d\n",cost);

}

void merge2(dependency_info a[],int n,dependency_info b[],int m)
{
	int i=0,j=0;
	dependency_info c[n+m];
	while(i<n&&j<m)
	{
		if(a[i].predecessorID<b[j].predecessorID)
		{
			c[i+j] = a[i];
			i++;
		}

		else
		{
			c[i+j] = b[j];
			j++;
		}
	}

	while(i<n)
	{
		c[i+j] = a[i];
		i++;	
	}
	while(j<m)
	{
		c[i+j] = b[j];
		j++;
	}
	for(i=0;i<n+m;i++)
		a[i] = c[i];
}

void mergesort2(dependency_info a[],int l)
{
	if(l<2)
	return;
	mergesort2(a,l/2);
	mergesort2(a+l/2,l-l/2);
	merge2(a,l/2,a+l/2,l-l/2);
}

void print_schedule1(subpart_data *job,int k,dependency_info *a, int l)
{	
	//PART 1 ->CHAIN according to dependency

	int table[k+1][2],i,j;
	for(i=0;i<=k;i++)
		table[i][0]=table[i][1] = -1;

	for(i=0;i<l;i++)
		{
			table[a[i].predecessorID][1] = a[i].successorID;
			table[a[i].successorID][0] = a[i].predecessorID;
		}

	subpart_data array[k][k];
	int n=-1,sizes[k];

	int added[k];
	for(i=0;i<k;i++)
		{
			added[i] = 0;
			sizes[i] = -1;
		}

	//Adding 1 lengths

	for(i=1;i<=k;i++)
	{
		if(table[i][0]==-1&&table[i][1]==-1)
		{
			n++;
			array[n][0] = job[i-1];
			added[i-1] = 1;
			sizes[n] = 0;
		}
	}

	//First element of each chain has (-1 non -1)

	for(i=1;i<=k;i++)
	{
		if(table[i][0]==-1&&table[i][1]!=-1)
		{
			n++;
			array[n][0] = job[i-1];
			sizes[n]=0;
			added[i-1]=1;
			j = table[i][1];
			while(j!=-1)
			{
				sizes[n]++;
				array[n][sizes[n]] = job[j-1];
				added[j-1] = 1;
				j = table[j][1];

			}
		}
	}

	//DONE print the chains

	for(i=0;i<=n;i++)
	{
		for(j=0;j<=sizes[i];j++)
			printf("%d->",array[i][j].subpartID);

		printf("\n");
	}



	
}	

int main()
{
	int k,i,j;
	scanf("%d",&k);
	subpart_data job[k];
	for(i=0;i<k;i++)
	{
		scanf("%d",&job[i].duration);
		job[i].subpartID = i+1;
	}

	for(i=0;i<k;i++)
		scanf("%d",&job[i].cost_per_day);
	
	print_schedule(job,k);


	int l;
	scanf("%d",&l);
	dependency_info a[l];
	for(i=0;i<l;i++)
	{
		scanf("%d%d",&a[i].predecessorID,&a[i].successorID);
	}
	

	print_schedule1(job,k,a,l);
	return 0;
}