/**
a = 10
b =5 
o/p
a= 5
b = 10
 * @file c_0606_SwapNumberValues.c
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
   int a,b,temp;
   printf("Enter 2 values ");
   scanf("%d %d", &a, &b);
   temp = a;
   a= b;
   b = temp;
   printf("The swap values of a is %d and b is %d", a, b);



 }