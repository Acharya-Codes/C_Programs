#include <stdio.h>

int main() {
    int day;
    printf("Enter the day to take leave: ");
    scanf("%d", &day);

    switch(day) {
        case 0:
        printf("The day is SUNDAY");
        break;
        case 1:
        printf("The day is MONDAY");
        break;
        case 2:
        printf("The day is TUESDAY");
        break;
        case 3:
        printf("The day is WEDNESDAY");
        break;
        case 4:
        printf("The day is THRUSDAY");
        break;
        case 5:
        printf("The day is FRIDAY");
        break;
        default:
        printf("The day is SATURDAY");
    }
    return 0;
}