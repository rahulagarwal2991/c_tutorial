/**
WAP to use if statement to print a message if input value is greater than 10

Syntax :

if(condition){
        // code execute
}else{
        // code if if block is false
}
*/

#include <stdio.h>
 
int main(){
        int num;

        printf("Enter the value: ");
        scanf("%d", &num);

        if(num>10){
                printf("Your value is greater than  10");
        }else{
                printf("Your value is lower than  10");
        }



}