#include <stdio.h>

float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}

int main() {
    int choice;
    float temp;

    do {
        printf("1. Convert Celsius to Fahrenheit\n");
        printf("2. Convert Fahrenheit to Celsius\n");
        printf("3. Stop\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter temp in Celsius: ");
                scanf("%f", &temp);
                printf("%.2f Celsius is equal to %.2lf Fahrenheit\n", temp, celsiusToFahrenheit(temp));
                break;

            case 2:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temp);
                printf("%.2f Fahrenheit is equal to %.2lf Celsius\n", temp, fahrenheitToCelsius(temp));
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Please enter a valid choice.\n");
        }
    } while (choice != 3);

    return 0;
}
