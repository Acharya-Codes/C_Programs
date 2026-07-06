#include <stdio.h>

int main() {
    int value = 1;
    while(value <= 10) {
        printf("3*%d=%d\n",value,3*value);
        value++;
    }
    return 0;
}