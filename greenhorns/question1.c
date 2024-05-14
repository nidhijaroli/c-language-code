#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Read temperature in Celsius from the user
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit using the formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);

    return 0;
}

