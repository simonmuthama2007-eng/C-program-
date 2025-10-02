/*
Name: Simon Mutisya Muthama 
Reg No:CT100/G/26227/25
Description: program to alculate water bill 
*/

#include<stdio.h>

int main()
{
int units;
double bill=0;
    printf("Enter units you used:");
    scanf("%d",&units);
    if(units<=30){
    bill=units*20;
    }else if(units<=60){
    bill=(30*20)+((units-30)*25);
    }else{
    bill =(30*20)+(30*25)+((units-60)*30);
    }
    printf("Water bill:%.2lfKsh",bill);
    
    return 0;
}