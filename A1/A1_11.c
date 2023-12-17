#include <stdio.h>
#include <math.h>

int fibonacciIterative(int n) {
    if (n <= 1) {
        return n;
    }
    int prev = 0, current = 1, next;
    for (int i = 2; i <= n; i++) {
        next = prev + current;
        prev = current;
        current = next;
    }

    return current;
}

int fibonacciFormula(int n) {
    double t1 = (1 + sqrt(5)) / 2;
    double t2 = (1-sqrt(5)) / 2;
    return round((pow(t1, n) - pow(t2, n)) / sqrt(5));
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int iterativeResult = fibonacciIterative(n);
    int formulaResult = fibonacciFormula(n);

    printf("Iterative Result: %d\n", iterativeResult);
    printf("Formula Result: %d\n", formulaResult);

    if (iterativeResult == formulaResult) {
        printf("Both results are the same.\n");
    } else {
        printf("Results are different.\n");
    }

    return 0;
}
