#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "21500046.h"
#include "21500048.h" 

#define TRUE 1
#define FALSE 0

int reverse_digits(int n);
int sort_digits(int n); 
char *toBinary(int n); 
bool isPrime(int n); 

int main (void){

char input[10000];

while(fgets(input, sizeof(input), stdin)!= NULL){
    if(input[strlen(input)-1] =='\n')
        input[strlen(input)-1]=0;

    if(strcmp(input, "quit")==0){
        printf("(bye)\n"); 
        break; 
    }

    int is_number = TRUE;
    for(int i=0; i < strlen(input); i++){
        if(!isdigit(input[i])){
            printf("Entered input is not a number\n");
            is_number = FALSE;
            break; 
        }
    }

    if(is_number){
        
        int  reverse = reverse_digits(atoi(input));
        int  sort = sort_digits(atoi(input));
        char *pointer = toBinary(atoi(input));  
        bool  prime=isPrime(atoi(input));
        printf("reverse> %d\nsort> %d\nbinary> %s\n", reverse, sort, pointer);
        (prime==true)? printf("true\n"): printf("false\n");
    }
   
  }
  
}

