
#include <stdio.h>

int main() {
    float u, v, S, a;

    printf("Enter initial velocity (u): ");
    scanf("%f", &u);
    printf("Enter final velocity (v): ");
    scanf("%f", &v);
    printf("Enter distance (S): ");
    scanf("%f", &S);

    a = (v*v - u*u) / (2*S);

    printf("Acceleration (a) is: %.2f\n", a);

    return 0;
}
