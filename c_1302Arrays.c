/**
 * @file c_1302Arrays.c
  WAP to insert N elements into an array.
  And then print the same..  
 * 
 */

 #include <stdio.h>

 int main(){
     int arr[100], n, i;
    // read user input for size of array
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    // read every element value from user input
    // insert data in an array
    printf("Enter %d no of elements:", n);
    for(i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    // read data from an array
    for(i = 0;i<n;i++){
        printf("%5d", arr[i]); //     1    2    3    4    5
    }    


 }

