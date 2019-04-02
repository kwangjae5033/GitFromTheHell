#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include "21500046.h" 

int reverse_digits(int n){

     int reverse = 0;
     while (n != 0){
      reverse = reverse * 10;
      reverse = reverse + (n%10);
      n       = n/10;
    }

    return reverse;  

}

char *toBinary(int n){

   int b, d, count; //b is number of bits 
   char *pointer = NULL;
   b = d = count = 0;

   pointer = (char*)malloc(16+1);

   if (pointer == NULL)
      exit(EXIT_FAILURE);

   for (b = 15 ; b >= 0 ; b--)
   {
      d = n >> b;

      if (d & 1)
         *(pointer+count) = 1 + '0';
      else
         *(pointer+count) = 0 + '0';

      count++;
   }
   *(pointer+count) = '\0';

   return  pointer;
}
