#include <stdio.h>

int euclideanGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int factorizationGCD(int a, int b) {
    int gcd = 1;
    int smaller = (a < b) ? a : b;

    for (int i = 2; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1;
    }

    int euclideanResult = euclideanGCD(num1, num2);
    printf("GCD using Euclidean Algorithm: %d\n", euclideanResult);

    int factorizationResult = factorizationGCD(num1, num2);
    printf("GCD using Factorization Method: %d\n", factorizationResult);

    return 0;
}
