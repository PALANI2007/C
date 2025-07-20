#include<stdio.h>
void stringcopy(char a[],char cpystr[])
{
    int count=0;
    while (a[count]!='\0')
    {
        cpystr[count]=a[count];
        count++;
    }
    cpystr[count]='\0';
}
int main()
{
    char a[100];
    char cpystr[100];
    printf("Enter string:");
    scanf("%s",&a);
    stringcopy(a,cpystr);
    printf("copy string: %s\n",cpystr);
    return 0;
}
