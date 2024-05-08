//*this is to verify whether the given number is odd or even //
#include <stdio.h>
int main(){
    int a;
    printf("please enter the number \n");
    scanf("%d", &a);
    a%2;
    if(a%2==0){
    printf ("%d is even",a);
}else {
    printf ("%d is odd",a);
}
}