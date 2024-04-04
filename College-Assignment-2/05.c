/*
5. WAP to grade the marks of a student where:
marks > 90 → O
marks in between 80 to 90 → E
marks in between 70 to 80 → A
marks in between 60 to 70 → B
marks in between 50 to 60 → C
marks in between 40 to 50 → D
marks below 40 → Fail
*/
#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);
    if (marks > 90) {
        printf("Grade: O (Outstanding)\n");
    } else if (marks >= 80 && marks <= 90) {
        printf("Grade: E (Excellent)\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade: A (Very Good)\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade: B (Good)\n");
    } else if (marks >= 50 && marks < 60) {
        printf("Grade: C (Average)\n");
    } else if (marks >= 40 && marks < 50) {
        printf("Grade: D (Below Average)\n");
    } else {
        printf("Grade: Fail\n");
    }
    return 0;
}
