#include <stdio.h>

void convertToIndianWords(int num) {
    char *units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    int crore = num / 10000000;
    int lakh = (num / 100000) % 100;
    int thousand = (num / 1000) % 100;
    int hundred = (num / 100) % 10;
    int remainder = num % 100;

    if (crore > 0) {
        printf("%s Crore ", units[crore]);
    }

    if (lakh > 0) {
        printf("%s Lakh ", units[lakh]);
    }

    if (thousand > 0) {
        printf("%s Thousand ", units[thousand]);
    }

    if (hundred > 0) {
        printf("%s Hundred ", units[hundred]);
    }

    if (remainder > 0) {
        if (remainder < 10) {
            printf("%s", units[remainder]);
        } else if (remainder < 20) {
            printf("%s", tens[remainder - 10]);
        } else {
            int ones = remainder % 10;
            int tensDigit = remainder / 10;
            printf("%s %s", tens[tensDigit], units[ones]);
        }
    }

    printf("\n");
}

void convertToInternationalWords(int num) {
    char *units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num > 99999999 || num < 0) {
        printf("Invalid input. Please enter an 8-digit positive number.\n");
        return;
    }

    int crore = num / 10000000;
    int lakh = (num / 100000) % 100;
    int thousand = (num / 1000) % 100;
    int hundred = (num / 100) % 10;
    int remainder = num % 100;

    if (crore > 0) {
        printf("%s Crore ", units[crore]);
    }

    if (lakh > 0) {
        printf("%s Lakh ", units[lakh]);
    }

    if (thousand > 0) {
        printf("%s Thousand ", units[thousand]);
    }

    if (hundred > 0) {
        printf("%s Hundred ", units[hundred]);
    }

    if (remainder > 0) {
        if (remainder < 10) {
            printf("%s", units[remainder]);
        } else if (remainder < 20) {
            printf("%s", teens[remainder - 10]);
        } else {
            int ones = remainder % 10;
            int tensDigit = remainder / 10;
            printf("%s %s", tens[tensDigit], units[ones]);
        }
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter an 8 digit number: ");
    scanf("%d", &num);

    if (num < 10000000 || num > 99999999) {
        printf("Please enter an 8 digit number.\n");
        return 1;
    }

    printf("Indian Number System: ");
    convertToIndianWords(num);

    printf("International Number System: ");
    convertToInternationalWords(num);

    return 0;
}
