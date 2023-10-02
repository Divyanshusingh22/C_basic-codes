#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Reverse the number using a while loop
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    return 0;
}
