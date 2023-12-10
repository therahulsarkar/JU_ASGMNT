#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("Enter the string: ");
    fgets(input, sizeof(input), stdin);

    printf("Reversed string: ");
    for (int i = strlen(input) - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }
    printf("\n");
    int start = 0;
    int flag = 0;
    int end = strlen(input) - 1;

    while (start < end) {
        if (input[start] != input[end]) {
            flag = 1;
            break;
        } else {
            start++;
            end--;
        }
    }

    if (flag) {
        printf("Not palindrome\n");
    } else {
        printf("Palindrome\n");
    }

    return 0;
}
