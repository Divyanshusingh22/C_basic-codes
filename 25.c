#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    // Prompt user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of natural numbers using a while loop
    while (i <= n) {
        sum += i;
        i++;
    }

    // Display the sum of natural numbers
    printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
