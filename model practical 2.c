#include<stdio.h>
int fac(int n)
{
    if(n==1)
        return 1;
    return n*fac(n-1);
}
int main()
{
    int n;

    printf("Enter number:");
    scanf("%d",&n);

    int result = fac(n);

    printf("factorial is:%d",result);
}
