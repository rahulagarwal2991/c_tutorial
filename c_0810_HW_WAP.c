//thisis to convert paise into rupees and paise //
#include <stdio.h>

int main() {
    int paise ;
    printf ("plese enter paise  value  ");
    scanf ("%d" ,& paise );
    int rupees = paise / 100;
    int l_paise = paise % 100; 
    printf ("the value of %d paise is Rs. %d & %d paise", paise , rupees , l_paise ); 
}