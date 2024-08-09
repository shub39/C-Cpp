#include <stdio.h>

int main() {
    int decimalNumber, remainder, octalNumber = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    while (decimalNumber != 0) {
        remainder = decimalNumber % 8;
        octalNumber += remainder * place;
        decimalNumber /= 8;
        place *= 10;
    }

    printf("The octal equivalent is: %d\n", octalNumber);

    return 0;
}
