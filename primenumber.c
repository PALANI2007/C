#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter the number to check:\n");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
        {
        if(n % i == 0) {
            break;
        }
    }
    if(i < n) {
        printf("Not Prime");
    } else {
        printf("Prime");
    }
    return 0;
 }
