/*
Name: Simon Mutisya Muthama 
Reg No:CT100/G/26227/25
Description: program to check final exam eligibility 
*/
#include<stdio.h>

int main()
{
float attendance ,marks;
int score ;
    printf("Enter your attendance:\t");
    scanf("%f",&attendance);
   
   printf("Enter your average marks:\t");
   scanf("%f",&marks);
   
    if(attendance>=75&& marks>=40){
  printf("You are eligible for final exam\n");
    }else{
    printf("Not eligible for final exam\n");
    }
    return 0;
}