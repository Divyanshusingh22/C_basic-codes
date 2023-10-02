#include <stdio.h>

int main() {
    char character;

    // Prompt user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &character); // Note the space before %c to consume any whitespace characters

    // Check if the entered character is uppercase, lowercase, digit, or special character
    if ((character >= 'A' && character <= 'Z')) {
        printf("The character is an uppercase letter.\n");
    } else if ((character >= 'a' && character <= 'z')) {
        printf("The character is a lowercase letter.\n");
    } else if ((character >= '0' && character <= '9')) {
        printf("The character is a digit.\n");
    } else {
        printf("The character is a special character.\n");
    }

    return 0;
}
