/**
 * @file c_0704_IfElseControlStatementWAP.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-30
 * 
 * @copyright Copyright (c) 2024
 * WAP to find the grade of s student based on his marks
   I grade  -> 70 %
   II Grade -> 50 %
   III Grade-> 35 %
   Rest ->  Fail      
 */

 #include <stdio.h>

 int main(){
        int percentage;

        printf("Enter the percentage: ");
        scanf("%d", &percentage);

        if(percentage >= 70){
                printf("I Grade");

        }else{

                if(percentage >= 50){
                        printf("II Grade");
                
                }else{
                        if(percentage >= 35){
                                        
                                printf("III Grade");
                                
                        }else{

                                printf("Fail");   
                        }
                }   
        }

 }