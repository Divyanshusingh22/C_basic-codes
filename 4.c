#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char fullName[100];
    char abbreviatedName[100] = "";
    int i, length;

    // Prompt user to enter the full name
    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Convert the first letter of the first word to uppercase
    abbreviatedName[0] = toupper(fullName[0]);

    // Iterate through the full name to find spaces and extract first letters
    length = strlen(fullName);
    for(i = 0; i < length; i++) {
        if(fullName[i] == ' ') {
            // If a space is found, extract the next character as an initial
            abbreviatedName[strlen(abbreviatedName)] = toupper(fullName[i + 1]);
        }
    }

    // Print the abbreviated name
    printf("Abbreviated Name: %s\n", abbreviatedName);

    return 0;
}
