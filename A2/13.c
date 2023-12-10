#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortMatrix(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        sort(arr[i], cols);
    }
}

void sumMatrix(int arr1[MAX_ROWS][MAX_COLS], int arr2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    sortMatrix(result, rows, cols);
}

void displayMatrix(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);

    int array1[MAX_ROWS][MAX_COLS], array2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array2[i][j]);
        }
    }

    sortMatrix(array1, rows, cols);
    sortMatrix(array2, rows, cols);

    printf("\nSorted First matrix:\n");
    displayMatrix(array1, rows, cols);

    printf("\nSorted Second matrix:\n");
    displayMatrix(array2, rows, cols);

    sumMatrix(array1, array2, result, rows, cols);

    printf("\nResultant Sorted matrix:\n");
    displayMatrix(result, rows, cols);

    return 0;
}
