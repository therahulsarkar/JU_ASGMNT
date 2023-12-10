#include <stdio.h>
#include <math.h>
#define MAX_SIZE 10


double calculateNorm(int rows, int cols, int matrix[MAX_SIZE][MAX_SIZE]) {
    double sum = 0.0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j] * matrix[i][j];
        }
    }
    double norm = sqrt(sum);

    return norm;
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }


    double norm = calculateNorm(rows, cols, matrix);
    printf("The norm of the matrix is: %lf\n", norm);
    return 0;
}
