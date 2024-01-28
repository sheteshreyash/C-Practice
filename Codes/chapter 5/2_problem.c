// write a function to convert celcius temperature to farenheit

#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

int main()
{
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = celsiusToFahrenheit(celsius);
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}
