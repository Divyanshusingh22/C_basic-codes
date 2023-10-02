#include <stdio.h>

int main() {
    int number, count = 0;

    // Prompt user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Count the number of digits using a while loop
    while (number != 0) {
        number /= 10;
        count++;
    }

    // Display the number of digits
    printf("Number of digits: %d\n", count);

    return 0;
}
