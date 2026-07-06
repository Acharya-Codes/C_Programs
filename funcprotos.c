#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age);
void ageCheck();    

int main() {
    hello("Acharya", 17);
    ageCheck();
    return 0;
}

void hello(char name[], int age) {
    printf("Hello %s\n", name);
    printf("Your age is %d\n", age);
}

void ageCheck() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);    

    if (age >= 18) {
        printf("You are old enough\n");
    } else {
        printf("You are not old enough\n");
    }
}
