#include <stdio.h>

int checkPalindrome(int a, int b) {
    int result = 0;
    
    while (a > 0) {
        int last = a % 10;
        a = a / 10;
        result = result * 10 + last;
    }
    
    return result == b ? 1 : 0;
}

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (checkPalindrome(a, b)) {
        printf("The numbers are palindrome\n");
    } else {
        printf("They are not palindrome\n");
    }

    return 0;
}
