#include<stdio.h>
int main()
{
    int num,r,original,reverse=0;

    printf("ENTER NUMBER:");
    scanf("%d",&num);

    original=num;

    while (num>0)
    {
        r=num%10;
        reverse=reverse+(r*r*r);
        num=num/10;

    }

    if(original==reverse)
    {
        printf("Armstrong Number");

    }
    else
    {
        printf("Not a Armstrong Number");
    }
    return 0;
}
