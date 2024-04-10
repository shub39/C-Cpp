// 10. WAP to calculate the 𝑛 𝐶𝑟 of the given problem.
#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
unsigned long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    if (n < r) {
        printf("Error: n should be greater than or equal to r.\n");
    } else {
        printf("%d C %d = %llu\n", n, r, nCr(n, r));
    }
    return 0;
}
