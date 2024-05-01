/**
 * WAP to find the sum of a 3 digit number
   123 => 1+2+3 => 6
 * @file c_0604_FindSumOfNumber.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 #include <stdio.h>

 int main(){
    int number, number_backup;
    int a, b, c, sum;
    printf("Enter a 3 digit number: ");
    scanf("%d", &number); // 123
    number_backup = number;
    a = number % 10; // 3
    number = number/10; // 12
    b = number%10; // 2
    number = number/10; // 1
    c = number % 10; //1
    sum = a+b+c;
    printf("The sum of input number %d is %d", number_backup , sum);

    

 }