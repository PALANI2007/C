#include<stdio.h>
int main()
{
    char name[15];

    int id,unit , surcharge=0 ;

    printf("Enter name:");
    scanf("%s",name);

    printf("Enter consumer id:");
    scanf("%d",&id);

    printf("Enter reading unit:");
    scanf("%d",&unit);


    if(unit<=199)
    {
        unit=unit*1.20;
        printf("Total bill:%d",unit);
    }


     else if(unit>=200&&unit<400)
    {
        unit=unit*1.50;
        printf("Total bill:%d",unit);
    }


     else if(unit>=400&&unit<600)
    {
        unit=unit*1.80;
        printf("Total bill:%d",unit);
    }


     else if(unit>=600)
    {
        unit=unit*2;
        printf("Total bill:%d",unit);
    }


    if(unit>400)
        {
            surcharge=unit*15/100+unit;

        printf("\nTotal surcharge:RS %d/-",surcharge);
        }

    else
    {
        printf("\nNot applied surcharge: RS %d/-",unit);

    }

    return 0;
    }
