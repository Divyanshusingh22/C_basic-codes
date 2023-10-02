#include <stdio.h>

int main() {
    int N, i;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &N);

    // Print the multiplication table of N
    printf("Multiplication table of %d:\n", N);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
