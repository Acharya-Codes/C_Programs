#include <stdio.h>
struct Student
{
        char name[20];
        int age;
        float mark;
};
int main() {
    struct Student s1;

    printf("Enter the name: ");
    scanf("%s", s1.name);
    printf("Name=%s\n",s1.name);
    printf("Enter the age: ");
    scanf("%d", &s1.age);
    printf("Age=%d\n",s1.age);

    printf("Enter the mark: ");
    scanf("%f", &s1.mark);
    printf("Mark=%f\n",s1.mark);


// Array of structs!!!

    typedef struct {
        char name[50];
        int year;
        int price;
    }Car;

    Car cars[] = {{"Waganor",2015,56000},{"Swift DZire",2019,69000},{"Lambo",2016,70000}};
    int num = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < num; i++){
        printf("%s:%d:%d\n",cars[i].name,cars[i].year,cars[i].price);
    }

    return 0;
}
