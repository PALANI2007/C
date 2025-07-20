#include<stdio.h>
int calculate sum ();
int main()
{
    int result;
    result = calculate sum();
    printf("The sum of two number is:%d\n",result);
    returrn 0;
}
int calculate sum ()
{
    int num1,num2;
    printf("Enter number 1",num1);
    scanf("%d"&num1);
    printf("Enter number 2",num2);
    scanf("%d"&num2);
    return num1+num2;
}
