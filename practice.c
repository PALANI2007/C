/*#include <stdio.h>
int factorial(int n)
 {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Factorial of %d is %d\n", number, factorial(number));

    return 0;
}*/

/*#include <stdio.h>

void bubbleSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        // Flag to track if any swaps were made in this pass
        int swapped = 0;

        // Loop to compare adjacent elements
        for (int i = 0; i < size - step - 1; i++) {
            if (array[i] > array[i + 1]) {
                // Swap if the element found is greater than the next element
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                // Set the flag to indicate a swap was made
                swapped = 1;
            }
        }

        // If no swaps were made in this pass, the array is sorted
        if (swapped == 0) {
            break;
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {5, 1, 4, 2, 8};
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    printf("Sorted array in Ascending Order:\n");
    printArray(data, size);

    return 0;
}*/



/*#include <stdio.h>

void multiplyArrays(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int result[size];

    multiplyArrays(arr1, arr2, result, size);

    printf("Result of element-wise multiplication:\n");
    printArray(result, size);

    return 0;
}*/



/*
#include <stdio.h>

#define ROW1 2 // number of rows in matrix1
#define COL1 3 // number of columns in matrix1
#define ROW2 3 // number of rows in matrix2
#define COL2 2 // number of columns in matrix2

void multiplyMatrices(int matrix1[ROW1][COL1], int matrix2[ROW2][COL2], int result[ROW1][COL2]) {
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COL1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void printMatrix(int matrix[ROW1][COL2]) {
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROW1][COL1] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[ROW2][COL2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[ROW1][COL2];

    multiplyMatrices(matrix1, matrix2, result);

    printf("Result of matrix multiplication:\n");
    printMatrix(result);

    return 0;
}*/




#include<stdio.h>
int main()
{
    int arra[2][2],arrb[2][2],i,j,res[i][j]=0;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter array 1 element:");
            scanf("%d",arra[][]);
        }
    }
    printf("***Enter next array***\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter array 2 element:");
            scanf("%d",arrb[][]);
        }
    }

    res[i][j]+=arr[i][k]*arr[k][j];

    printf("array multiply :",res[i][j]);


}

