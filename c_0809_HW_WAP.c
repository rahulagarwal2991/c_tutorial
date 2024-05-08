//* this is to convert seconds into hours mins and seconds//
#include <stdio.h>

int main() {
    int seconds ;
    printf ("plese enter seconds value  ");
    scanf ("%d" ,&seconds);
    int hours = seconds / 3600;
    int mins = seconds % 3600; 
    int r_mins = mins / 60 ;
    int secs = seconds % 60 ;
    printf ("the value of %d seconds is %d hours , %d mins & %d seconds ", seconds , hours , r_mins , secs ); 
}