//
/*
name ; Simon Muthama 
Reg ;CT100/G/26227/25
description; height, phone number and weight
*/
#include <stdio.h>

int main() {
    float height, weight;
    char phone[10];   

    // Prompt the user
    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    printf("Enter your phone number: ");
    scanf("%s", phone);

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    // Display the entered details
    printf("\n--- Your Details ---\n");
    printf("Height: %.2f cm\n", height);
    printf("Phone Number: %s\n", phone);
    printf("Weight: %.2f kg\n", weight);

    return 0;
}