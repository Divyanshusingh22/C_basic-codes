#include <stdio.h>

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm, i = 0;

    // Prompt user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series using a do-while loop
    printf("Fibonacci Series: ");
    do {
        printf("%d, ", firstTerm);

        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;

        i++;
    } while (i < n);

    printf("\n");

    return 0;
}
