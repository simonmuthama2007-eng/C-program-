/*
Name: Simon Mutisya Muthama 
Reg No:CT100/G/26227/25
Description: Program for Mobile data purchase 
*/
#include <stdio.h>

int main() {
    int choice;

    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB   @ 350 KES\n");
    printf("4. 2GB   @ 600 KES\n");

    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("You selected 100MB. Cost = 50 KES\n"); break;
        case 2: printf("You selected 500MB. Cost = 200 KES\n"); break;
        case 3: printf("You selected 1GB. Cost = 350 KES\n"); break;
        case 4: printf("You selected 2GB. Cost = 600 KES\n"); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}