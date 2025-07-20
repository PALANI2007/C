#include<stdio.h>
int main()
{
    int area,lenght,width;

    printf("ENTER LENGHT: ");
    scanf("%d",&lenght);

    printf("ENTER WIDTH:");
    scanf("%d",&width);

    area=lenght*width;

    printf("AREA OF THE RECTANGLE IS:%d\n",area);

    return 0;
}
