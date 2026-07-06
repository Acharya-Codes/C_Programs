#include <stdio.h>
#include <math.h>
int main() {
    float x = 0;
    float A = 0;
    float P = 0;
    float R = 0;
    float N = 0;
    float T = 0;

    printf("Enter your Principal Amount: ");
    scanf("%f",&P);

    printf("Enter your Intrest rate: ");
    scanf("%f",&R);
    R = R/100;

    printf("Enter the number of times compounded per year: ");
    scanf("%f",&N);

    printf("Enter the Time Period: ");
    scanf("%f",&T);

    x = pow(1+(R/N),N*T);
    A = P * x;

    printf("Your Final Amount is: %f",A);

    return 0;
}