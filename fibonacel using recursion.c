#include<stdio.h>
void bonacci(int n)
{
    int n1=0,n2=1,n3;
    if (n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d",n3);
        bonacci(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the nunmber :");
    scanf("%d",&n);
    printf("fibonacci series:");
    printf("%d%d",0,1);
    bonacci (n-2);
    return 0;
}
