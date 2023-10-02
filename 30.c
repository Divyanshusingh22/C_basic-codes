#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number using a for loop
    for (; number != 0; number /= 10) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    // Display the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
