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