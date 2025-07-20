#include<stdio.h>
int main()
{
    int num1,num2,result;
    char opprater;

    printf("ENTER OPPRATER(+ = 1,- = 2,* = 3,/ = 4,mod = 5,square = 6):");
    scanf("%d",&opprater);

    if (opprater == 6)
    {

        printf("ENTER THE SQUARE NUMBER:");
        scanf("%d",&num1);

        result=num1*num1;
        printf("%d",result);

        }

    else
    {

               printf("ENTER NUM 1:");
               scanf("%d",&num1);
               printf("ENTER NUM 2:");
               scanf("%d",&num2);

    switch (opprater)
    {
        case 1:
        result=num1+num2;
        printf("add : %d + %d = %d",num1,num2,result);
        break;

        case 2:
        result=num1-num2;
        printf("sub: %d - %d = %d",num1,num2,result);
        break;

        case 3:
        result=num1*num2;
        printf("mul: %d * %d = %d",num1,num2,result);
        break;

        case 4:
            if(num1!=0){
        result=num1/num2;
        printf("div : %d / %d = %d",num1,num2,result);}
        else
        {
            printf("error");
        }
        break;

        case 5:
        result=num1%num2;
        printf("mod : %d  %d = %d",num1,num2,result);
        break;



        default :
            printf("error!! opprater is not correct");
    }
    return 0;

        }
}
