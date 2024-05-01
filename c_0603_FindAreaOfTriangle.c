/**
 * @file c_0602_FindAreaOfRect.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-29
 * 
 * @copyright Copyright (c) 2024
 * WAP to find the area of a traiangle
 */


 #include <stdio.h>

 int main(){
    float base ;
    float height;
    float area;
    printf ("please enter height of triangle \n");
    scanf ("%f", &height);
    printf ("please enter base of triangle \n");
    scanf ("%f", &base);
    area=  0.5 * base * height;
    printf ("the area of triangle is %f", area);
 }