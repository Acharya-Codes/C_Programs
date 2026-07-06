#include <stdio.h>
#include <math.h>

int main() {
    double radius = 0;
    double area = 0;
    double circumference = 0;

    printf("Enter the radius of the circle: ");
    scanf("%lf",radius)

    area = 3.1415 * pow(radius,2);
    printf("Area of the circle is %lf",radius);

    circumference = 2 * 3.1415 * radius;
    printf("Circumference of the circle is: %lf",circumference);

    return 0;
    }