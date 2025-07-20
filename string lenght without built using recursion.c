#include<stdio.h>
int string_length (char a[])
{
    int count=0;
    while(a[count]!='\0')
    {
        count++;
    }
    return count;
}
int main()
{

    char a[50];
    printf("enter string:");
    scanf("%s",&a);
    int count = string_length (a);
    printf("string lenght is: %d",count);
}
