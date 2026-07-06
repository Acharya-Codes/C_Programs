#include <stdio.h>
typedef int Num;
typedef char String[50];
int main() {
    Num a = 2;
    Num b = 3;
    Num c = a + b;
    printf("%d\n", c);
    String name = "Acharya";
    printf("%s",name);
    return 0;
}