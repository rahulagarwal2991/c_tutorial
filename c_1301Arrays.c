/**
 * @file c_1301Arrays.c
    int value = 10;// integer type variable
    int value[];// integer type array : initialization
    int value[] = {10, 20 , 30 , 40 , 20, 10};// value declaration 

    int a[100];
    char ch[10];
    float data[100];
 * 
 */
 #include <stdio.h>

 int main(){
     // case 1 
     int value[] = {10, 20 , 30};
     // case 2
     int value2[4];
     value2[0] = 10;
     value2[1] = 20;
     value2[2] = 30;
     value2[3] = 60;

     printf("%lu", sizeof(value2));// 4*{no of elements} = 12

 }

