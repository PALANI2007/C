#include<stdio.h>
int value(int n)
{

  if(n%2 == 0)
    {
        printf("%d is even no",n);
    }
    else
    {
        printf("%d is odd no",n);
    }
    return n;

}
int main()
{
    int n;
    int sum;
    printf("enter no:",n);
    scanf("%d",&n);

    sum=value(n);
}
