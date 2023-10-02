#include <stdio.h>

int main() {
    int day, month, year;
    int isLeapYear = 0; // 1 if it's a leap year, 0 otherwise

    // Prompt user to enter date, month, and year
    printf("Enter date (1-31): ");
    scanf("%d", &day);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Check if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        isLeapYear = 1;
    }

    // Check if the entered date, month, and year form a valid date
    if (month >= 1 && month <= 12) {
        if (month == 2) {
            if (isLeapYear && day >= 1 && day <= 29) {
                printf("Valid date.\n");
            } else if (!isLeapYear && day >= 1 && day <= 28) {
                printf("Valid date.\n");
            } else {
                printf("Invalid date.\n");
            }
        } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day >= 1 && day <= 30) {
            printf("Valid date.\n");
        } else if (day >= 1 && day <= 31) {
            printf("Valid date.\n");
        } else {
            printf("Invalid date.\n");
        }
    } else {
        printf("Invalid date.\n");
    }

    return 0;
}
