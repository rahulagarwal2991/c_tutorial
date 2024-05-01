/**
  Find reverse of a number
 * @file c_0605_FindReverseNumber.c

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
    int rev_number;

    printf("Enter a 3 digit number: ");
    scanf("%d", &number); // 123
    number_backup = number;

    rev_number = number % 10; // 3

    number = number/10; // 12

    rev_number = rev_number*10 + number%10; // 2

    number = number/10; // 1
    rev_number = rev_number*10 + number % 10; //1
    
    printf("The Reverse of input number %d is %d", number_backup , rev_number);

    

 }