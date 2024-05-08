#include <stdio.h>

int main(){

    char ch;
    printf("Enter the small char: ");
    scanf("%c",&ch); // a = 97 , A = 65
    ch = ch -32;
    printf("The converted char is %c ", ch);

}