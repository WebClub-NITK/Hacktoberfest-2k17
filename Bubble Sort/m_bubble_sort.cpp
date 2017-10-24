#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sort(int a[],int n) {
	int i,j,tmp,swp=0;
	for(i=0;i<n;i++) {
		for(j=0;j<n-1-i;j++) {
			if(a[j]>a[j+1]) {
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				swp=1;
			}
		}
		if(!swp)
			break;
	}
	printf("After sorting.....\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");

}

void main() {
	int a[20],n,i;
	printf("Enter how mny element\n");
	scanf("%d",&n);
	srand (time(0));
	for(i=0;i<n;i++) {
		a[i] = rand()%100;
	}
	printf("Before sorting.....\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");
	sort(a,n);
}
