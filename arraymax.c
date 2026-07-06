#include <stdio.h>

int main() {
    int array[5] = {10,20,30,40,50};
    int max = array[0];
    for(int i = 1; i < 5; i++) {
        if(array[i] > max) {
            max = array[i]; 
            
        }
    }    
printf("Max value is : %d\n", max);
                return 0;

    }

    
