//to check wheather the year is leap year or not//
#include <stdio.h>

int main() {
    int days; 
    printf ("please enter no. of days in  year");
    scanf ("%d", &days);
    if (days==366) {
        printf("year is leap year ");
    }else {
        printf("year is not a leap year");
    }
        
}