#include <stdio.h>

int main() {
    float rupees, dollars, euros, pounds;

    printf("Enter amount in Indian Rupees: ");
    scanf("%f", &rupees);

    dollars = rupees * 0.014;  // 1 INR = 0.014 USD
    euros = rupees * 0.012;    // 1 INR = 0.012 EUR
    pounds = rupees * 0.011;   // 1 INR = 0.011 GBP

    printf("Equivalent amount in USD: %.2f\n", dollars);
    printf("Equivalent amount in EUR: %.2f\n", euros);
    printf("Equivalent amount in GBP: %.2f\n", pounds);

    return 0;
}
