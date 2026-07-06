#include <stdio.h>
#include <string.h>
int main() {
    float result = 0.0;
    float a = 0.0;
    float b = 0.0;
    char op = '\0';
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("Enter the operation u want to do (+,-,*,/): ");
    scanf(" %c",&op);

    switch(op) {
        case '+':
            result = a+b;
            printf("Result: %f",result);
            break;
        case '-':
            result = a-b;
            printf("Result: %f",result);
            break;
        case '*':
            result = a*b;
            printf("Result: %f",result);
            break;
        case '/':
            result = a/b;
            printf("Result: %.2f",result);
            break;
        
    }
    
    return 0;
}