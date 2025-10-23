/*
Name: Simon Mutisya Muthama 
Reg No:CT100/G/26227/25
Date:23/10/2025
Description: converting Fahrenheit to Celsius 
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit:\t");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius = %.2f°C\t", convertToCelsius(fahrenheit));
    return 0;
}