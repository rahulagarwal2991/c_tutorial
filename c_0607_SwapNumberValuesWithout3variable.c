/**
 * @file c_0607_SwapNumberValuesWithout3variable.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-29
 * 
 * @copyright Copyright (c) 2024
 * WAP to swap 2 values without using 3rd variable

a = 10
b = 5
a = a+b// 15
b = a-b// 10
a= a-b// 5


 */


 int main() {
    int a;
    int b;
    printf("please enter 2 values \n ");
    scanf ("%d", &a);
    scanf ("%d", &b);
    a = a+b ;
    b = a-b ;
    a = a-b ;
    printf ("The swap vaues are %d and %d", a,b );
    
}