#include <stdio.h>

// Function to calculate the sum of array elements
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;

    // Asking the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Taking input for array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calling the function and storing the result
    int result = sumArray(arr, n);

    // Displaying the result
    printf("The sum of the array elements is: %d\n", result);

    return 0;
}

