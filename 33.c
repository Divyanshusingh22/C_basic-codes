#include <stdio.h>

int main() {
    int dayNumber;

    // Prompt user to enter a number representing the day of the week
    printf("Enter a number (1 to 7) representing the day of the week: ");
    scanf("%d", &dayNumber);

    // Print the day of the week name using switch case
    switch (dayNumber) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}
