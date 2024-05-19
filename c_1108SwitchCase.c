/**
 * 
Structure:

switch(value){
   case value1:
      // code
      //break;
   ...
   default:
      // code
      // break; 
   
}
*/
 #include <stdio.h>

 int main(){
    int number = 10;

   switch(number){
      case 1:
         printf("One \n");
         break;
      case 2:
          printf("TWo \n");
          break;
      case 3:
          printf("Three \n");
          break;
      default :
         printf("No case matched");
          break;
   }
 }