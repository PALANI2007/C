#include <stdio.h>

// Function definition
int addition() {
    int a, b;

    // Get user input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Return the sum
    return a + b;
}

int main() {
    int sum;

    // Call the function and store the return value
    sum = addition();

    // Print the result
    printf("The sum is: %d\n", sum);
    return 0;
}
