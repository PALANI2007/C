#include<stdio.h>
int main()
{
    int n,arr[100],i,j,midintex,t;

    printf("Enter array:");
    scanf("%d",&n);

    printf("enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=0;i<n-1;i++)
    {
        midintex=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[midintex])
            {
                midintex=j;
            }
        }

     t=arr[i];
     arr[i]=arr[midintex];
     arr[midintex]=t;
    }

    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;

}
