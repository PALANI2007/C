#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("ENTER THE VALUE OF A:");
    scanf("%d",&a);

    printf("ENTER THE NUMBER OF B:");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("THE VALUE OF A IS:%d",a);

    printf("\nTHE VALUE OF B IS:%d",b);

    return 0;
}
