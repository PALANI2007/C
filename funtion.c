#include<stdio.h>
int calculatesum();
int main()
{
    int result;
    result = calculatesum();
    printf("The sum of two number is:%d\n",result);
}
int calculatesum()
{
    int num1,num2;
    printf("Enter number 1",num1);
    scanf("%d"&num1);
    printf("Enter number 2",num2);
    scanf("%d"&num2);
    return num1+num2;
}
