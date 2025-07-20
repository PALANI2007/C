#include<stdio.h>
int main()
{
    char name[100];
    int age;
    char gender[5];
    long long ph_num;
    char address[100];

     printf("ENTER YOUR NAME:");
     scanf("%s",&name);
     printf("\nENTER YOUR AGE:");
     scanf("%d",&age);
     printf("\nENTER YOUR GENDER(M/F):");
     scanf("%s",&gender);
     printf("\nENTER YOUR PHONE NUM:");
     scanf("%lld",&ph_num);
     printf("\nENTER YOUR ADDRESS:");
     scanf("%s",&address);

     printf("***************");

     printf("\nNAME:%s",name);
     printf("\nAGE:%d",age);
     printf("\nGENDER:%s",gender);
     printf("\nPHONE NUM:%lld",ph_num);
     printf("\nADDRESS:%s",address);
     return 0;
}
