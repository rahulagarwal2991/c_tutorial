// output = condition ? value1: value2

#include <stdio.h>

int main(){
    int a =9;

    int b = 0;

    // if(a== 10){
    //     b = 100;    
    // }else{
    //     b = 200;
    // }

    b = ( a== 10) ? 100: 200;

    printf("%d", b);
}