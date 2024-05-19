/**
 * @file c_1401Strings.c
 * Strings: "Hello World"
 1. 
 2. 
 3. "\0"
 4. ""
Syntax:
 char name[] = "any string";
 */

#include <stdio.h>

 int main(){
     // char example
     char name = 'a';// example of a char
     printf("%5c\n", name);

     // string example
     char firstString[] = "Hello World";// example of a string
     
     printf("%s \n", firstString);// %s format specifier for a string
     
     // accessing a char from a string
     printf("%5c\n", firstString[0]);// first char of a string

    // modify a string element
    firstString[0] = 'A';
    printf("%s \n", firstString);// Aello World

    //looping over a string

    for(int i = 0; i<11; i++){
        //if(){}
        printf("%c\n", firstString[i]);
    }

    // to find the size of a string
    int k = sizeof(firstString);
    printf("%d\n", k);

    for(int i = 0; i<k; i++){
        printf("%c\n", firstString[i]);
    }

    // 

    char newString[] = {'H','e','l','l','o',' ','W','o','r','l','d', '\0'};
    printf("%s \n", newString);
 }