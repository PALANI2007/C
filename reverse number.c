#include <stdio.h>
 int main() {
    int number, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number >0)
        {
        reversed = reversed * 10 + number % 10;
        number = number / 10;
    }

    printf("Reversed Number: %d\n", reversed);
    return 0;
 }
