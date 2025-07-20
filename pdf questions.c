//area of the rectangle
/*#include<stdio.h>
int main()
{
    int area,length,width;
    printf ("enter the length : ");
    scanf ("%d",&length);

    printf ("enter the width : ");
    scanf ("%d",&width);

    area = length * width;

    printf ("AREA OF THE RECTANGLE : %d\n",area);
    return 0;
}*/



//personal details
/*#include<stdio.h>
int main()
{
    char name[100],gender [100];
    int age;
    long reg_no,ph_num;


    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your gender(MALE/FEMALE):");
    scanf("%s",&gender);
    printf("Enter your register number:");
    scanf("%d",&reg_no);
    printf("Enter your phone number:");
    scanf("%d",&ph_num);

    printf("***************\n");

    printf("Your name is:%s\n",name);
    printf("Your age is:%d\n",age);
    printf("Your gender is:%s\n",gender);
    printf("Your register number is:%d\n",reg_no);
    printf("Your phone number is:%d\n",ph_num);
return 0;
}*/


//leap year
/*#include<stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d",&year);

    if((year%4==0&&year%100!=0)||(year%400==0))
    {
        printf("leap year");

    }
    else
    {
        printf("not leap year");

    }
    return 0;
}*/



//reverse number
/*#include<stdio.h>
int main()
{
    int r,num,reverse=0;

    printf("Enter reverse number:");
    scanf("%d",&num);

    while(num>0)
    {
        r=num%10;
        reverse=reverse*10+r;
        num=num/10;


    }
            printf("Reverse number is:%d",reverse);
            return 0;

}*/


//simple calcualater
/*#include<stdio.h>
int main()
{
    int num1,num2,result;
    char opprater;

        printf("Enter opprater(add=1,sub=2,mul=3,div=4,mod=5,seq=6):");
        scanf("%d",&opprater);


        if(opprater=6)
        {
        printf("Enter num1:");
        scanf("%d",&num1);

        result=num1*num1;
        printf("seq:%d",result);
        }
        else
        {


        printf("Enter num1:");
        scanf("%d",&num1);

        printf("Enter num2:");
        scanf("%d",&num2);

    switch(opprater)
    {


    case 1:
    result=num1+num2;
    printf("add:%d",result);
    break;

    case 2:
    result=num1-num2;
    printf("sub:%d",result);
    break;

    case 3:
    result=num1*num2;
    printf("mul:%d",result);
    break;

    case 4:
    result=num1/num2;
    printf("div:%d",result);
    break;

    case 5:
    result=num1%num2;
    printf("mod:%d",result);
    break;

    return 0;

    default:
        printf("error!!!!");

}
return 0;

}
}*/


//armstrong number
/*#include<stdio.h>
int main()
{
    int num,r,original,reverse=0;

    printf("Enter number:");
    scanf("%d",&num);

    original = num;

    while(num!=0)
    {
        r=num%10;
        reverse=reverse+(r*r*r);
        num=num/10;
    }

    if(original==reverse)
    {
        printf("Armstrong number");

    }
    else
    {
        printf("not armstrong");
    }

}*/


//electrical bill
/*#include<stdio.h>
int main()
{
    int unit,id,surcharge;
    char name[15];

    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter your id :");
    scanf("%d",&id);
    printf("Enter your reading unit:");
    scanf("%d",&unit);


    if(unit<=199)
    {
        unit = unit *1.20;
        printf("total bill:%d",unit);

    }
    else if (unit>200&&unit<400)
    {
        unit = unit *1.50;
        printf("total bill:%d",unit);
    }
    else if(unit>=400&&unit<600)
    {
        unit = unit *1.80;
        printf("total bill:%d",unit);

    }
    else if(unit>=600)
    {
        unit =unit *2.00;
        printf("total bill:%d",unit);

    }
    if(400<unit)
    {
        surcharge = unit*15/100+unit;
        printf("\ntotal surcharge:%d",surcharge);
    }
    else
    {
        printf("\nnot found surcharge:%d",unit);
    }
}*/

//selection sort

/*#include<stdio.h>
int main()
{
    int n,arr[100],i,j,midintex,t;

    printf("Enter array:");
    scanf("%d",&n);

    printf("enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=0;i<n-1;i++)
    {
        midintex=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[midintex])
            {
                midintex=j;
            }
        }

     t=arr[i];
     arr[i]=arr[midintex];
     arr[midintex]=t;
    }

    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;

}
*/

//linear search
/*#include<stdio.h>
int main()
{
    int n,i,target,flag=0;

    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {

        printf("Enter array elements:");
        scanf("%d",&arr[i]);
    }

    printf("Enter target number:");
    scanf("%d",&target);

    for(i=0;i<n;i++)
    {

    if(arr[i]==target)
        {
             flag=1;
             printf("the index is:%d",i);
             break;
    }
    }
    if(flag==0)
    {
        printf("error!!!");
    }

}*/

//binary search using recursion
/*#include<stdio.h>
int binary(int arr[],int left,int right,int target)
{
    if(left>right)
        return 0;

    int mid=(left+right)/2;
    if(arr[mid]==target)
        return mid;

    else if(arr[mid]<target)
    return binary(arr,mid+1,right,target);
    else
        return binary(arr,left,mid-1,target);
}
int main()
{
    int n,arr[100],target,result;
    printf("enter array:");
    scanf("%d",&n);

    printf("enter array element:\n");
    for(int i=0;i<n;i++)

    {
        scanf("%d",&arr[i]);
    }
    printf("enter your target:");
    scanf("%d",&target);

    result=binary(arr,0,n-1,target);

    if(result!=0)
    {
        printf("array found in :%d",result);
    }
    else
    {
        printf("error!!");
    }
}*/



//factorial using recursion
/*#include<stdio.h>
int fac(int n)
{
    if(n==1)
        return 1;
    return n*fac(n-1);
}
int main()
{
    int n;

    printf("Enter number:");
    scanf("%d",&n);

    int result = fac(n);

    printf("factorial is:%d",result);
}*/


//multiple 2 matrix
/*#include <stdio.h>
int main()
{
    int row,colm,i,j;

    printf("Enter the row:");
    scanf("%d",&row);

    printf("Enter the colm:");
    scanf("%d",&colm);

    int matrix1[row][colm],matrix2 [row][colm],product[row][colm];
      printf("Enter 1 matrix :\n");
        for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }

    }
     printf("Enter 2 matrix :\n");
        for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }


        for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            product[i][j] = matrix1[i][j] * matrix2[i][j];

        }
    }


      for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            printf(" %d",product[i][j]);
        }
        printf ("\n");
    }


}
*/


//all string with in build
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    char strcopy[100],strconcat[100];

    printf("Enter the 1 string:");
    gets(str1);
    printf("Enter the 2 string:");
    gets(str2);

    printf("lenght of the string 1 : %d \n",strlen(str1));
    printf("lenght of the string 2 : %d \n",strlen(str2));

    strcpy(strcopy,str1);
    printf("copy the string:%s\n",strcopy);

    int compare = strcmp(str1,str2);
    if(compare == 0)
    {
        printf("string are equal.\n");
    }
    else
    {
        printf("not equal.\n");
    }

    strcpy(strconcat,str1);
    strcat(strconcat,str2);
    printf("Concat is : %s\n",strconcat);

   strrev(str1);
   printf("reverse is : %s\n",str1);

   strlwr(strcopy);
   printf("string lower: %s\n",strcopy);

   strupr(strcopy);
   printf("string upper:%s\n",strcopy);

   return 0;
}*/




//call by value & referance

/*#include<stdio.h>
void callvalue(int x,int y)
{
    int temp  = x;
        x = y;
        y = temp;
        printf("\ncall by value inner value:%d %d",x,y);
}
void callreferance(int *x,int *y)
{
     int temp  =  *x;
        *x = *y;
        *y = temp;
        printf("\ncall by referance inner value:%d %d",*x,*y);

}
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);

    callvalue(a,b);
    printf("\ncall by value outer value : %d %d",a,b);

    callreferance(&a,&b);
    printf("\n call by value outer value : %d %d",a,b);
}
*/

//array avarage using poiter
/*#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("Enter array value:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr = &arr;
    for(int i=0;i<n;i++)
    {
        sum = sum + (*ptr + i);

    }

    float avarage = sum /n;

    printf("Avarage of array elements:%.2f",avarage);
}*/

//structure student details
/*#include<stdio.h>
struct student
{
    int roll_no;
    char name[100];
    float mark[3];
};
int main()
{
    struct student p;

    printf("Enter roll number:");
    scanf("%d",&p.roll_no);

    printf("Enter name:");
    scanf("%s",p.name);


    for(int i=0;i<3;i++)
    {
        printf("Enter %d sub mark:",i+1 );
        scanf("%f",&p.mark[i]);
    }

    printf("***student details***\n");
    printf("roll no:%d\n",p.roll_no);
    printf("name:%s\n",p.name);
    for (int i=0;i<3;i++)
    {
        printf(" sub mark:%2.f\n",p.mark[i]);

    }

    return 0;
}*/


