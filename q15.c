#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);

    if(a < b && b < c){
        printf("%d is the largest number",c);
    }else if(a < b && b > c){
        printf("%d is the largest number",b);
    }else{
        printf("%d is the largest number",a);
    }

    return 0;
}