// this is to check wheather the sold item gains profit or loss//
#include <stdio.h>

int main (){
    int cp;
    printf ("please enter cost price ");
    scanf("%d",&cp);
    int sp;
    printf ("please enter selling price");
    scanf("%d", &sp);
    if(sp>cp){
        int profit= sp-cp;
        printf ("the profit is of rupees %d", profit);}
    else if (cp>sp){
        int loss= cp - sp ;
        printf ("the loss is of rupees %d ", loss);
   
    } else {
        printf ("there is no profit or loss");
    }
    }