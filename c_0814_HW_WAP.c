/*
this is to find your electricity bill
*/
#include <stdio.h>

int main (){
    int unit ;
    int bill;
    int l_unit ;
    int l_unit_2;
    printf (" please enter the cosumed units value");
    scanf ( "%d",&unit );
    if (unit<= 50 ){
        bill = unit * 5 ;
        printf ("your bill is of Rs. %d", bill);

    }else if (unit <= 100){
        l_unit= unit - 50 ;
        bill = 50*5 +l_unit*6;
        printf ("your bill is of Rs. %d", bill);

    }else {
        l_unit= unit - 50;
        l_unit_2 = l_unit- 50;
        bill= 50*5+50*6+ l_unit_2*7;
        printf ("your bill is of Rs. %d", bill);

    }
}