/**
 * @file c_1103ForLoopWAP.c
 WAP to print a even values from 1 to 10 using for loop and if clause.
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 #include <stdio.h>

 int main(){

    for(int i = 1; i<= 10; i++){
        if(i == 5){
            break;
        }
        printf("%d \n", i);
    }

 }