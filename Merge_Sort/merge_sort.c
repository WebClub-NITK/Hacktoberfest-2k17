#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge_sort(int a[],int l,int mid,int r) {
	int n1,n2,i,j,k;
	n1=mid-l+1;
	n2=r-mid;
	int L[n1],R[n2];
	
	for(i=0;i<n1;i++)
		L[i]=a[l+i];
	for(j=0;j<n2;j++)
		R[j]=a[mid+j+1];
	
	i=j=k=0;
	for(k=l;k<=r;k++) {
		if(L[i]<R[j]) {
			a[k]=L[i];
			i++;
		}
		else 	{
			a[k]=R[j];
			j++;
		}
	}

}

void merge(int a[],int l,int r) {
	int mid;
	if(l<r) {
		mid=(l+r)/2;
		merge(a,l,mid);
		merge(a,mid+1,r);
		merge_sort(a,l,mid,r);
	}
}

void main() {
	int a[20],n,i;
	printf("Enter how mny element\n");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		a[i] = rand()%100;
	}
	printf("Before sorting.....\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");
	merge(a,0,n-1);
	printf("After sorting.....\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");

}
