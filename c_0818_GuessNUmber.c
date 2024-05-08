#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int user_input = 0;

    printf("Enter a value b/w 0 and 99 : ");
    scanf("%d", &user_input);
    
    srand(time(0));
    int number = rand()%100;

    if(user_input > number){
        printf("user wins \n");
        // printf("user %d, computer %d ", user_input, number);
    }else{
        printf("computer wins");
        // printf("user %d, computer %d ", user_input, number);
    }

}