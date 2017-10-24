#include<stdio.h>

int findIndex(int arr[],int ele,int n) {
    int s,e,mid;
    s=0;e=n-1;
    mid = (s+e)/2;
    
    while(s<=e) {
        if(arr[mid] == ele)
            return mid;
        else if(arr[mid] > ele)
            e = mid-1; 
        else
            s = mid+1;  
    }
    return 0;
}



int main() {
    int arr[50],i,n,ele;
    printf("ENter hw mny nos.........\n");
    scanf("%d",&n);
    printf("ENter the elements........\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d  ",arr[i]);
    printf("\nEnter element to find\n");
    scanf("%d",&ele);
    int index= findIndex(arr,ele,n);
    printf("Index = %d\n",index);
    return 0;
}
