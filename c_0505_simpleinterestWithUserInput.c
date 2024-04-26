// c_0502_simpleinterest.c
/**
 * This program is used to find the SI of a amount
 * @file c_0502_simpleinterest.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-26
 * 
 * @copyright Copyright (c) 2024
 * 
 %f = to print float value
 %d = to print numeric value
 %c = to print char value
 */

#include <stdio.h>

int main(){
    int principle;// int 
    float rate; // float 
    int time;// per annum
    float simple_interest;

    printf("Please enter principle then rate then time \n");
    scanf("%d %f %d",&principle, &rate, &time );// to read user input

    simple_interest = (principle * rate * time )/ 100; // formula
    printf("The Simple interst for the values input is Rs. %f", simple_interest);
    return 0;
}
