#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include "21500048.h" 
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

int sort_digits(int n){
    while (TRUE) {
       long a = n % 10, p = 9;
       int s = FALSE;
        for (long r = n / 10; r; r/= 10) {
            long b = r % 10;
            if (a < b) {
               n -= p * (b - a);
               s = TRUE;
            } 
            else a = b;
         p *= 10;
        }
    if (!s) return n;
  }     
}


bool isPrime(int n){
	int i;
   if(n<2)return false;
	for(i=2; i<n; i++){
		if(n%i==0) return false;

	}
	return true;

} 
