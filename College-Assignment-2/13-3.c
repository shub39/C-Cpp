// Print a Hollow Half Hollow Pyramid
#include <stdio.h>

int main() {
    int rows, i, j;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= rows; j++) {
            if (j == 1 || i == rows || j == i) {
                printf("%d ", j);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
