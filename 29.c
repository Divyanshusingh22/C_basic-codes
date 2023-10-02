#include <stdio.h>

int main() {
    int num1, num2, lcm, gcd, temp;

    // Prompt user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int originalNum1 = num1;
    int originalNum2 = num2;

    // Calculate GCD using Euclidean algorithm
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    gcd = num1; // GCD of the two numbers

    // Calculate LCM using the formula: LCM = (num1 * num2) / GCD
    lcm = (originalNum1 * originalNum2) / gcd;

    // Display the LCM
    printf("LCM of %d and %d is: %d\n", originalNum1, originalNum2, lcm);

    return 0;
}
