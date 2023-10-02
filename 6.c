#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;

    // Prompt user to enter marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");

    // Read marks for each subject
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        // Validate marks (assuming marks are between 0 and 100)
        while (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input! Marks should be between 0 and 100.\n");
            printf("Enter marks for subject %d: ", i + 1);
            scanf("%f", &marks[i]);
        }

        // Calculate total marks
        total += marks[i];
    }

    // Calculate percentage
    percentage = (total / 500) * 100;

    // Display the calculated percentage
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
