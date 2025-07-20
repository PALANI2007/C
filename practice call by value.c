#include<stdio.h>

void palani(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}
int main()
{
    int a=1;
    int b=2;

    printf("%d %d\n",a,b);

    palani(&a,&b);

     printf("%d %d\n",a,b);

     return 0;
}
