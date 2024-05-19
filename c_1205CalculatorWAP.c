/**
WAP to take 2 values from user as input and find 
1. sum +
2. Multiplication *
3. Division /
4. subtraction -
5. Modulus %

 * @file c_1205CalculatorWAP.c
 */

 #include <stdio.h>
 // prototypes
float addition(int value1, int value2);
float subtraction(int value1, int value2);
float multiplication(int value1, int value2);
float division(int value1, int value2);
float modulation(int value1, int value2);
void printOutput(float result);

 int main(){

     int val1, val2, operator;
     float result;
     printf("Please enter 2 values and operator\n\n");
     printf("1. sum \n2. Multiplication\n3. Division\n4. subtraction\n5. Modulus\n");
     
     scanf("%d %d %d", &val1, &val2, &operator);
 
    switch(operator){

        case 1: // sum
            result = addition(val1, val2);
            break;

        case 2: // Multiplication
            result = multiplication(val1, val2);
            break;

        case 3: // Division
            result = division(val1, val2);
            break;

        case 4: // subtraction
            result = subtraction(val1, val2);
            break;

        case 5: // Modulus
            result = modulation(val1, val2);
            break;

        default:
            printf("Invalid operations");
            return;
    }

    printOutput(result);
 }

 float addition(int value1, int value2){
    return value1+value2;
 }

 float subtraction(int value1, int value2){
    return value1-value2;
 }

 float multiplication(int value1, int value2){
    return value1*value2;
 }

 float division(int value1, int value2){
    return value1/value2;
 }
 float modulation(int value1, int value2){
    return value1%value2;
 }

void printOutput(float result){
    printf("The output is %f", result);
}
