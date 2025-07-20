#include<stdio.h>
#include<math.h>
int main() {
int num,copy,sum=0,digit=0,remainder;
printf("Enter a number:");
scanf("%d",&num);
copy=num;
while(copy>0)
{
    copy /=10;
    digit++;
}
copy=num;
while(copy > 0){
    remainder=copy%10;
    sum=sum+pow(remainder,digit);
    copy /=10;
}
if(sum==num)
{
  printf("Armstrong number");
}
else
{
    printf("Not a Armstrong number");
}
return 0;



}
