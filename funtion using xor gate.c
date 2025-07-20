#include <stdio.h>
void xor(int x , int y)
{

    x=x^y;
    y=x^y;
    x=x^y;

     printf("swapped number is a=%d,b=%d",x,y);

}
int main()
{
    int a,b;
    printf("enter two swap numbers ");
    scanf("%d%d",&a,&b);

     xor(a,b);
     return 0;
}
