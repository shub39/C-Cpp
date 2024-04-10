//3. WAP to print a day in a week where the input will be given by user in form of number (use if-elseif-elseif-else structure to print it)
#include <stdio.h>

int main() {
    int day_number;
    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &day_number);
    if (day_number == 1) {
        printf("Sunday\n");
    } else if (day_number == 2) {
        printf("Monday\n");
    } else if (day_number == 3) {
        printf("Tuesday\n");
    } else if (day_number == 4) {
        printf("Wednesday\n");
    } else if (day_number == 5) {
        printf("Thursday\n");
    } else if (day_number == 6) {
        printf("Friday\n");
    } else if (day_number == 7) {
        printf("Saturday\n");
    } else {
        printf("Invalid input. Please enter a number between 1 and 7.\n");
    }
    return 0;
}
