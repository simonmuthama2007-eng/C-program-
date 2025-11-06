/*
Name: Simon Mutisya Muthama
Reg No:CT100/G/26227/25
Date:6/11/2025
Description: Library report 
*/
#include <stdio.h>

int main()
 {
    FILE *fp;
    char title[50];
    
// Open in append mode
    fp = fopen("borrowed_books.txt", "a"); 
    if (fp == NULL) {
        printf("Error opening file.\t");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);
    
 // Write title to the file
    fprintf(fp, "%s", title); 

    fclose(fp);
    printf("Confirmed, book title stored successfully.\t");

    return 0;
}