#include <stdio.h>

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        if(num > 0) {
            printf("The number is even and postivie\n");
        } else if (num < 0) {
            printf("The number is even and negative\n");
        } else if (num == 0) {
            printf("The number is even and equal to zero\n"); 
        }
        } else {
            if (num > 0) {
                printf("The number is odd and postivie\n");
            } else if (num < 0) {
                printf("The number is odd and negative\n");
            }
        }
            return 0;
}

            
            
        
        
        
    
