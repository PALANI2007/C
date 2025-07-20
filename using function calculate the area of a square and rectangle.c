#include<stdio.h>
int value(int a,int b,int c)
{
    printf("%d\n",a*a);

    printf("%d",b*c);
}
int main()
{
    int a,b,c;

    printf("enter the area of a square:",a);
    scanf("%d",&a);

    printf("enter the lenth of the rectangle:");
    scanf("%d",&b);

    printf("enter the breath of the rectangle:");
    scanf("%d",&c);
    value(a,b,c);
}
