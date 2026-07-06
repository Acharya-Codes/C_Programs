#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL)); // This we are using as the random function is not really random but uses a set seed to generate a number!
     // As the time changes every second we can get a different output every time!!
    int min = 1;
    int max = 9;
    
    int randnum = (rand() % (max-min) + 1) + min ; // Formula to write a random number!!
    printf("%d",randnum);
    return 0;
}