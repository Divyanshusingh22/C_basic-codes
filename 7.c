#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Prompt user to enter temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Display temperature in Fahrenheit
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
