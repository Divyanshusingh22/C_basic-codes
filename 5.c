#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Prompt user to enter principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Prompt user to enter interest rate
    printf("Enter the interest rate (in percentage): ");
    scanf("%f", &rate);

    // Prompt user to enter time period
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the calculated simple interest
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}
