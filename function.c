#include <stdio.h>

// Function declaration
int addition(int, int); //Function Prototype

int main()
{
    int num1 = 2, num2 = 3, sum;

    // Call the function and store the return value
    sum = addition(num1, num2);

    // Print the result
    printf("The sum is: %d\n", sum);
    return 0;
}

// Function definition
int addition(int a, int b)
{
    return a + b;
}
