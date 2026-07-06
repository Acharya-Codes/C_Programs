#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int guess = 0;
    int tries = 0;
    bool isRun = true;
   
    
    srand(time(NULL));
    int min = 2;
    int max = 99;
    
    int randnum = (rand() % (max-min) + 1) + min;
     printf("---Welcome to Aachi's number guessing game---\n");

    while(isRun) {
        printf("Enter the number which u guessed: \n");
        scanf("%d",&guess);
        tries += 1;
       if (guess > randnum){
         printf("Number is too high broh!\n");
         
        }else if (guess < randnum) {
            printf("Number is too low broh!\n");
            
        } else{
            printf("Congrats you won!\n");
            printf("Your tries are %d",tries);
            isRun = false;
        }
    }
   

    return 0;
}