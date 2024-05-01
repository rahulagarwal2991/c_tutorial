/**
 * @file c_0602_FindAreaOfRect.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-29
 * 
 * @copyright Copyright (c) 2024
 * WAP to find the area of a rectangle
 */


 #include <stdio.h>

 int main(){
    float length;
    float breadth;
    float area;
    printf("Please enter length of a rectangle : \n");
    scanf("%f",&length);
    printf("Please enter breadth of a rectangle : \n");
    scanf("%f",&breadth);

    area = length * breadth;

    printf("The area of a rectangle is %f", area);

 }