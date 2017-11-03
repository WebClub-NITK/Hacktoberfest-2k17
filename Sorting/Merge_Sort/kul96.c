#include<stdio.h>
void mergesort(int arr[],int,int);
void merge(int arr[],int,int,int);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Unsorted Array");
    for(int i=0;i<n;i++)
    {
        printf("  %d,",arr[i]);
    }
    mergesort(arr,0,n);

    printf("\n Sorted Array:");
    for(int i=0;i<n;i++)
    {
        printf("  %d,",arr[i]);
    }
    return 0;
}
void mergesort(int arr[], int left, int right)
{
    if(right > left)
    {
        int mid = (left + right)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,right,mid);
    }
}
void merge(int arr[],int left,int right,int mid)
{
    int i,j,k=left;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int l[n1],r[n2];
    for(i=0;i<n1;i++)
    {
        l[i] = arr[left+i];
    }
    for(i=0;i<n2;i++)
    {
        r[i] = arr[mid+i+1];
    }
    i = j = 0;

    while(i<n1 && j<n2)
    {
        if(l[i] <= r[j])
        {
            arr[k] = l[i];
            i = i+1;
        }
        else
        {
            arr[k] = r[j];
            j = j + 1;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = r[j];
        j++;
        k++;
    }
}