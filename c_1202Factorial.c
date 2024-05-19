/**
 * @file c_1202Factorial.c
 WAP to find the factorial of a value using recursion
 * 
 */

 #include <stdio.h>
int factorial(int n);

 int main(){
   int value = factorial(5);
   printf("%d", value);
 }

 int factorial(int n){
    if(n > 1){
       return n*factorial(n-1);
    }else{
       return 1;
    }
 }

 /**
  * @brief 
  5*fact(4)
  5*4*fact(3)
  5*4*3*fact(2)
  5*4*3*2*fact(1)
  5*4*3*2*1
  * 
  */