/*
c_1006_Increment_decrementOperator.c


*/

#include <stdio.h>

int main(){

    // int value = 10;
    // // value = value - 1 ;
    // value--;// decrement
    // printf("%d", value);
    

    // int value = 10;
    // // value = value + 1 ;
    // value++;// increment 
    // printf("%d", value);

    // pre(before) and post(after)
    // int value = 10;
    // printf("%d",value++);// 10 //post increment
    // printf("%d",value);// 11
    // printf("%d",value--);// 11 //post decrement
    // printf("%d",value);// 10
    // ++value; // pre increment

    int value = 10;
    printf("%d",++value);// 11 //pre increment
    printf("%d",value);// 11
    printf("%d",--value);// 10 //pre decrement
    printf("%d",value);// 10
    // ++value; // pre increment

}