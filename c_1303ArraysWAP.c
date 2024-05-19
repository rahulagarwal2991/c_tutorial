/**
 * @file c_1302Arrays.c
  WAP to sort the array data
 * 
 */

 #include <stdio.h>

 int main(){
     int a[] ={50, 40, 20, 10, 90};// 10, 20, 40, 50, 90
     int i,temp, size = 5;   
     for(i =0; i<size; i++){
         for(int j = i+1; j<size ; j++){
             if(a[i] > a[j]){
                 temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
             }

         }
     }

     // print array data
     for(i=0; i<size; i++){
         printf("%5d", a[i]);
     }

 }

