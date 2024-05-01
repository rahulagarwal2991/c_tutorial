/**
 * @file c_0601_operators.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-29
 * 
 * @copyright Copyright (c) 2024
 * 

 * -> multiply -> 3*2 = 6 
 / -> divide -> 4/2 = 2
 % -> modulus -> 3/2 = 1
 + -> add       -> 3+3 = 6
 - -> sub -> 4-2 = 2
 = => assignment operator

 first proitory * / %
 second priority + - 
 third = assigment

 
 */

 #include <stdio.h>

 int main(){
    int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8;
         = 6/4 + 4 / 4 + 8 - 2 + 5 / 8;
         = 1+4 / 4 + 8 - 2 + 5 / 8;
         = 1+1+ 8 - 2 + 5 / 8;
         = 1+1+ 8 - 2 +0;
         = 2+ 8 - 2 +0;
         = 10 -2;
         = 8
    int j = 3/2*4+3/8;
        = 1*4+3/8;
        = 4+3/8;
        = 4+0
        = 4

    printf("%d", i);
 }