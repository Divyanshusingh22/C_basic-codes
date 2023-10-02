#include <stdio.h>

int main() {
    int num1, num2, gcd;

    // Prompt user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Find GCD using Euclidean algorithm
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    gcd = num1;

    // Display the GCD
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
