#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    // Prompt user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculate the number of digits
    for (; originalNumber != 0; originalNumber /= 10, ++n);

    originalNumber = number;

    // Calculate Armstrong number
    for (; originalNumber != 0; originalNumber /= 10) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
    }

    // Check if the number is an Armstrong number
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
