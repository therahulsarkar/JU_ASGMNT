#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int lcmOfArray(int arr[], int n) {
    int result = 1;

    for (int i = 0; i < n; i++) {
        result = lcm(result, arr[i]);
    }

    return result;
}

int main() {
    int n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result = lcmOfArray(arr, n);
    printf("LCM of the entered integers: %d\n", result);
    return 0;
}
