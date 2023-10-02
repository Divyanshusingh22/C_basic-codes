#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1; // Use unsigned long long to store larger factorials

    // Prompt user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the entered number is non-negative
    if (number < 0) {
        printf("Error! Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial of the number
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        // Display the factorial
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}
