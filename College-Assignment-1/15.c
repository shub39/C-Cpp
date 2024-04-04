
#include <stdio.h>

int main() {
    float basicSalary, grossSalary, ta, da, hra;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    ta = 0.10 * basicSalary;
    da = 0.85 * basicSalary;
    hra = 0.15 * basicSalary;

    grossSalary = basicSalary + ta + da + hra;

    printf("Gross salary of the employee is: %.2f\n", grossSalary);

    return 0;
}
