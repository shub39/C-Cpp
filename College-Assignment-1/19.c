#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    float length, breadth, side, radius, area;
    printf("Choose the shape to calculate the area:\n");
    printf("1. Rectangle\n");
    printf("2. Square\n");
    printf("3. Circle\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter length of rectangle: ");
            scanf("%f", &length);
            printf("Enter breadth of rectangle: ");
            scanf("%f", &breadth);
            area = length * breadth;
            printf("Area of rectangle: %.2f\n", area);
            break;
        case 2:
            printf("Enter side of square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of square: %.2f\n", area);
            break;
        case 3:
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of circle: %.2f\n", area);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
