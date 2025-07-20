#include<stdio.h>
struct student
{
    char name[50];
    int age;
    int total_mark;
    float average_mark;
}s1,s2;
int main()
{


    for(int i=0;i<2;i++)
    {

    printf("\nEnter the student name:");
    scanf("%s",s1.name);
    printf("\nEnter the student age:");
    scanf("%d",&s1.age);
    printf("\nEnter the student total mark:");
    scanf("%d",&s1.total_mark);
    printf("\nEnter the student average mark:");
    scanf("%f",&s1.average_mark);
    printf("\n***********");


    }

    for(int i=0;i<2;i++)
    {


    printf("\nname:%s",s1.name);
    printf("\nage:%d",s1.age);
    printf("\ntotal mark:%d",s1.total_mark);
    printf("\naverage mark:%f",s1.average_mark);
    printf("\n***********");

    }


}
