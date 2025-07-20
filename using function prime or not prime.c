#include<stdio.h>
int value(int n);
int value(int n)
{

    int i;

    for(i=2;i<n;i++)
    {
       if(n%i == 0)
       {
           break;
       }
    }
        if(i<n)
        {
            printf("not prime");
        }
        else
        {
            printf("prime");
        }

    return n;
}
int main()
{
    int n;
    printf("enter number:",n);
    scanf("%d",&n);

    value (n);
}
