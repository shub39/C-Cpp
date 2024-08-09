// WAP to design a menu driven calculator for different operation like addition,
// subtraction, multiplication, division. If you press 2 for addition, press 3
// for subtraction, press 4 for multiplication, press 5 for division and press 0
// for exit and 1 for continuation of the process.

#include <stdio.h>

int main() {
  int choice;
  float num1, num2, result;

  do {
    // Display the menu
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Perform the selected operation
    switch (choice) {
    case 1:
      printf("Enter two numbers: ");
      scanf("%f %f", &num1, &num2);
      result = num1 + num2;
      printf("Result: %.2f\n", result);
      break;
    case 2:
      printf("Enter two numbers: ");
      scanf("%f %f", &num1, &num2);
      result = num1 - num2;
      printf("Result: %.2f\n", result);
      break;
    case 3:
      printf("Enter two numbers: ");
      scanf("%f %f", &num1, &num2);
      result = num1 * num2;
      printf("Result: %.2f\n", result);
      break;
    case 4:
      printf("Enter two numbers: ");
      scanf("%f %f", &num1, &num2);
      if (num2 != 0) {
        result = num1 / num2;
        printf("Result: %.2f\n", result);
      } else {
        printf("Error: Division by zero\n");
      }
      break;
    case 0:
      printf("Exiting the program. Goodbye!\n");
      break;
    default:
      printf("Invalid choice. Please try again.\n");
      break;
    }

  } while (choice != 0);

  return 0;
}
