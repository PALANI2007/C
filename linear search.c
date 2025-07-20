#include<stdio.h>
int main()
{
    int n , i , target , flag = 0;
    printf("Enter The Number Of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the array element : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter your target number:");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
       if(arr[i]==target)
       {
           flag = 1;
           printf("The Element Is Found In Index %d\n",i);
           break;
       }
    }
       if(flag==0)
      {
        printf("Not found the element.\n");
      }
}
