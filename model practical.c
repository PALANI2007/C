#include<stdio.h>
int binary(int arr[],int left,int right,int target)
{
    if(left>right)
        return 0;

    int mid=(left+right)/2;
    if(arr[mid]==target)
        return mid;

    else if(arr[mid]<target)
    return binary(arr,mid+1,right,target);
    else
        return binary(arr,left,mid-1,target);
}
int main()
{
    int n,arr[100],target,result;
    printf("enter array:");
    scanf("%d",&n);

    printf("enter array element:\n");
    for(int i=0;i<n;i++)

    {
        scanf("%d",&arr[i]);
    }
    printf("enter your target:");
    scanf("%d",&target);

    result=binary(arr,0,n-1,target);

    if(result!=0)
    {
        printf("array found in :%d",result);
    }
    else
    {
        printf("error!!");
    }
}
