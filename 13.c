#include <stdio.h>

int main() {
    int number;

    // Prompt user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Calculate and print the first three powers
    printf("Powers of %d:\n", number);
    printf("%d^1 = %d\n", number, number);
    printf("%d^2 = %d\n", number, number * number);
    printf("%d^3 = %d\n", number, number * number * number);

    return 0;
}
