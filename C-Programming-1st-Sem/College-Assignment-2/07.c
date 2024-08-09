// 7. Write a C Program to calculate the sum, average of given n numbers.
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        float num;
        scanf("%f", &num);
        sum += num;
    }
    average = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
