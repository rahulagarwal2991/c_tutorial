/**
 * 
 * 
 strlen
 strlwr
 strupr
 ..
 * 
 */
#include <stdio.h>
#include <string.h>

 int main(){
    char newString[] = "Hello world";
    // find the length 
    int len = strlen(newString);
    printf("%d", len);// 11

    // convert an string into upper case -> strupr
     strupr(newString);
    printf("%s",  newString);// 11
 }