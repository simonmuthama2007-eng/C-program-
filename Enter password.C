/*
Name: Simon Mutisya Muthama 
Reg No:CT100/G/26227/25
Date:8/10/2025
Description:prompt user to enter the correct password 
*/

    #include <stdio.h>

int main() {
    char password[10];

    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, "4321") != 0) {
            printf("Incorrect password. Try again.\n");
        }

    } while (strcmp(password, "4321") != 0);

    printf("Access Granted.\n");

    return 0;
}