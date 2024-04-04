#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    int choice;

    printf("Choose conversion:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5 / 9;
            printf("Temperature in Celsius: %.2f\n", celsius);
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
