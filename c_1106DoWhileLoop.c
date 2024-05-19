/**
 * @file c_1105WhileLoop.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-09
 * 
 * @copyright Copyright (c) 2024
 * 
Structure:

//initilization of value

do{
// code 
}while(cond);
 */

 #include <stdio.h>

 int main(){
    int i = 11;// declaration and initilization

    do{
        printf("%d \n", i);// code
        i--;// value modification
    }while(i >= 0 && i<= 10);

 }