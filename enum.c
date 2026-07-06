#include <stdio.h>
#include <string.h>
typedef enum{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
}Day;
int main() {
    char tdy[10] = "";
    printf("Enter the day of the weeks(CAPS): ");
    scanf("%s",tdy);
    Day day;
    if(strcmp(tdy,"SUNDAY")==0 || strcmp(tdy,"SATURDAY")==0){
        printf("Today is weekend");
    }else if(strcmp(tdy,"MONDAY")==0 || strcmp(tdy,"TUESDAY")==0 || strcmp(tdy,"WEDNESDAY")==0 || strcmp(tdy,"THURSDAY")==0 || strcmp(tdy,"FRIDAY")==0){
        printf("Today is not weekend");
    }else{
        printf("Enter a valid input");
    }
    
}