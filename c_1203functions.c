/**
 * @file c_1201functions.c
  WAP to print a message using function
   Functions:
      1. prototyping
      2. declaration
      3. calling
   factorial of 5 : 5*4*3*2*1
 */

 #include <stdio.h>
 int printMessage();
 void message();
 

 int main(){

    // code 
    printf("Hello");

    message();// calling
 }

  void message(){// delcaration
    printf("Hello from message section");
    printMessage();// calling
 }

  int printMessage(){// delcaration
    printf("Hello from print message section");
    return 1;
 }

