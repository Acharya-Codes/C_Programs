#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    int max = (a > b) ? a : b;
    printf("%d",max);
    return 0;
}