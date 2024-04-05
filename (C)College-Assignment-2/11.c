// 11. WAP to calculate S=XY and print the value for S, where X and Y to be taken as input from keyboard
#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double X, Y, S;
    printf("Enter the value of X: ");
    scanf("%lf", &X);
    printf("Enter the value of Y: ");
    scanf("%lf", &Y);
    S = power(X, (int)Y); 
    printf("The result of %.2f raised to the power of %.2f is: %.2f\n", X, Y, S);
    return 0;
}
