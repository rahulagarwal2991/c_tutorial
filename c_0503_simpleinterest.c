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

    principle = 1000000;
    rate      = 8.8;
    time      = 15;
    simple_interest = (principle * rate * time )/ 100; // formula
    printf("%f", simple_interest);
    return 0;
}