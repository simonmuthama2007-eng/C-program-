/*
Name: Simon Mutisya Muthama 
Reg No:CT100/G/26227/25
Date:23/10/2025
Description: calculation of fare
*/
#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50; 
    // KSh. 50 per km
}

int main() {
    float distance;
    printf("Enter distance traveled (in km):\t");
    scanf("%f", &distance);

    printf("Total Fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}