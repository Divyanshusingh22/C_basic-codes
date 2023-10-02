#include <stdio.h>

int main() {
    char character;

    // Prompt user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &character); // Note the space before %c to consume any whitespace characters

    // Check if the entered character is a vowel
    if (character == 'a' || character == 'A' || 
        character == 'e' || character == 'E' || 
        character == 'i' || character == 'I' || 
        character == 'o' || character == 'O' || 
        character == 'u' || character == 'U') {
        printf("%c is a vowel.\n", character);
    } else {
        printf("%c is not a vowel.\n", character);
    }

    return 0;
}
