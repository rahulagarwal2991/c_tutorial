/*

*
**
***
****

*/

#include <stdio.h>

int main(){

    int range = 4;
    for(int increment = 1; increment <=range; increment++){
        
        for(int line = 1; line <=increment; line++){
            printf("*");
        }
        printf("\n");
    }

}