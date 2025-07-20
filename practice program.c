#include<stdio.h>
int main()
{
    int i,n;
    printf("enter");
    scanf("%d",n);

    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            break;
        }
        if(i<0)
        {
            prirntf("not a prime");
        }
        else
        {
            printf("prime");
        }
    }
}
