/*

c_1005_WAPForTableofThreeUsingForLoop.c
WAP to pring table of 3
*/

#include <stdio.h>

int main(){

    int table = 3;
    int range = 10;
    for(int increment = 1; increment <=range; increment++){
        printf("%d \n", table*increment);
    }

}