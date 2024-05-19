/**
WAP to take 2 values from user as input and find 
1. sum +
2. Multiplication *
3. Division /
4. subtraction -
5. Modulus %

 * @file c_1204CalculatorWAP.c
 */

 #include <stdio.h>
 // prototypes
void addition(int value1, int value2);
void subtraction(int value1, int value2);
void multiplication(int value1, int value2);
void division(int value1, int value2);
void modulation(int value1, int value2);
void printOutput(float result);

 int main(){

     int val1, val2, operator;
     
     printf("Please enter 2 values and operator\n\n");
     printf("1. sum \n2. Multiplication\n3. Division\n4. subtraction\n5. Modulus\n");
     
     scanf("%d %d %d", &val1, &val2, &operator);
 
    switch(operator){

        case 1: // sum
            addition(val1, val2);
            break;

        case 2: // Multiplication
            multiplication(val1, val2);
            break;

        case 3: // Division
            division(val1, val2);
            break;

        case 4: // subtraction
            subtraction(val1, val2);
            break;

        case 5: // Modulus
            modulation(val1, val2);
            break;

        default:
            printf("Invalid operations");
            break;
    }
 }

 void addition(int value1, int value2){
    float result;
    result = value1+value2;
    printOutput(result);
 }

 void subtraction(int value1, int value2){
    float result;
    result = value1-value2;
    printOutput(result);
 }

 void multiplication(int value1, int value2){
    float result;
    result = value1*value2;
    printOutput(result);
 }

 void division(int value1, int value2){
    float result;
    result = value1/value2;
    printOutput(result);
 }
 void modulation(int value1, int value2){
    float result;
    result = value1%value2;
    printOutput(result);
 }

void printOutput(float result){
    printf("The output is %f", result);
}
