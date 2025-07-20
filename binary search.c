#include<stdio.h>
int main()
{
    int n,i,target,left,right,mid;

    printf("Enter the number:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the target number:");
    scanf("%d",&target);

    left = 0;
    right = n-1;

    while (left<=right)
    {
        mid=(left+right)/2;

        if(arr[mid]==target)
        {
            printf("the index is : %d",mid);
            return 0;
        }
        else if(arr[mid]<target)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    printf("not fount index.");

    return 0;
}
