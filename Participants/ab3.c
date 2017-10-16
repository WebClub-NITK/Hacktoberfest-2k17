/*binary search*/

#include<stdio.h>



int main()

{

        int j,i,n,min,key,flag=0;

        printf("enter the value of n");

        scanf("%d",&n);

        int ar[n];

        printf("enter elements of the array");

        for(i=0;i<=n-1;i++)

                scanf("%d",&ar[i]);



	for(j=0;j<n;j++)

        {

                min=ar[j];

                for(i=j+1;i<=n-1;i++)

                if(min>ar[i])

                {      	min=ar[i];

                       	ar[i]=ar[j];

                        ar[j]=min;

                }

    	}



        printf("enter the key");

        scanf("%d",&key);



	if(key>ar[n-1]) 

		goto a;

        else if(key<ar[n/2])

		for(i=0;i<=n/2;i++)

     	        {

		       	if(key==ar[i])

                       	flag=1;

                }

       		else for(i=n/2;i<n;i++)

			if (key==ar[i])

                  		flag=1;



  	if(flag==1)

        printf("found");

	else a: printf("not found");

}
