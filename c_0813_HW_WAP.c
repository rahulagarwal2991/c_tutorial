/*
this is to check the income tax balance 
*/
#include <stdio.h>
int main (){
    int salary ;
    int left_s;
    int left_s_2;
     int left_s_3;
    int tax ;
    printf ("please enter you salary   ");
    scanf ("%d" , &salary);
    if (salary < 500000){
        printf("there is no income tax");
    } else if (salary<= 1000000){
         left_s = salary-500000;
         tax = (left_s*10)/100;
        printf ("your income tax is of Rs. %d", tax);
        } else if (salary<= 2000000){
         left_s = salary-500000;
         left_s_2 = left_s - 1000000;
        tax = (1000000*10)/100 + (left_s_2*20)/100;
        printf("your income tax is of Rs. %d", tax);
        
}else {
         left_s = salary-500000;
         left_s_2 = left_s - 1000000;
         left_s_3 = left_s_2 - 2000000;
         tax =(1000000*10)/100 + (2000000*20)/100 +(left_s_3*30)/100;
         printf ("your income tax is of Rs. %d", tax);
}
}