#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);
    
    sum = a + b;

    printf("Sum = %d/n", sum);

    return 0;

}
// To get a string input it is better to use fgets rather than scanf
// fgets(name,30,stdin); here name is the variable and 30 is the size of the character array