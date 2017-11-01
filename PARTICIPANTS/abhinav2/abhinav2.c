#include<stdio.h>

#include<math.h>



int main()

{

	int mat[100][100],i,j,n,trace=0;float norm=0.0;



	printf("enter order of the matrix");

	scanf("%d",&n);



       	printf("enter the matrix elements row-wise\n");

	for(i=0;i<n;i++)

		for(j=0;j<n;j++)

		{

			scanf("%d",&mat[i][j]);

			norm=norm+pow(mat[i][j],2);

			if(i==j)

			trace=trace+mat[i][j];

		}

	norm=sqrt(norm);



	printf("\nnorm=%f\ntrace=%d\n",norm,trace);

	return 0;

}
