#include<stdio.h>
int swap(int*x,int*y)
{
    int p;
    p=*x;
    *x=*y;
    *y=p;

    printf("inside function:x=%d,y=%d",*x,*y);
    return 0;
}
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("\nin the caller:a=%d,b=%d",a,b);
    return 0;
}
