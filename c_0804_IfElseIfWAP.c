/**
WAP to check if a employee is insured or not.
If employee is married : insurance will be provided
If employee is unmarried , male and age is > 30 : will get insurance
If employee is unmarried, female and age > 25 : will get insurance
else no insurance
 */

 #include <stdio.h>

 int main(){
      int age;
      char gender,marital_status;   

      printf("Please enter your age, Gender (M/F) and Marital status (M/U) \n");
      scanf("%d %c %c", &age, &gender, &marital_status);

      if(marital_status == 'M'){
              printf("You will get insurance");

      }  else { // if(marital_status == 'U') this is of no use
              if(gender == 'M' && age > 30){
                  printf("You will get insurance");    
              }else if(gender == 'F' && age > 25){
                      printf("You will get insurance");    
              }else{
                     printf("You will not get insurance");     
              }

      }


 }