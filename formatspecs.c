#include <stdio.h>
#include <stdbool.h>
int main(){
    int age = 25;
    float price = 69.69;
    double pi = 3.1415;
    char grade = 'A';
    char name[] = "Acharya";
    bool isStudent = true;

    printf("Your age is %d\n",age);  
    printf("The price of the carrot is %f\n",price);
    printf("The value of pi is %lf\n",pi);
    printf("The grade of the student is %c\n",grade);
    printf("Your name is %s\n",name);
    if (isStudent) {
        printf("You are a student");
    } else {
        printf("You are not a student");
    }
    int num1 = 1;
    int num2 = 69;
    int num3 = 100;

    printf("%3d\n",num1);  // Will leave three gaps before printing num1
    printf("%04d\n",num2);  // Will replace the gaps with zeroes

    float num4 = 19.89456;
    printf("%.3f",num4);  // Will make the float number to be 3 decimal places

    return 0;
}