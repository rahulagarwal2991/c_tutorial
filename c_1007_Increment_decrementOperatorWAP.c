/*
c_1007_Increment_decrementOperatorWAP.c
*/

#include <stdio.h>

int main(){

    int a,b;
    a = b = 1;
    printf("%d and %d", ++a * b++, a++ + ++b );// 2 and 5

    a = b = 2;
    printf("%d and %d", --a * ++b, a++ - --b );// 3 and -1


}