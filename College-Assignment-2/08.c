// 8. WAP to print the following series summation s= 1+2+3+4+5 … 100
#include <stdio.h>

int main() {
    int n = 100;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The sum of the series is: %d\n", sum);
    return 0;
}
