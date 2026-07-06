#include <stdio.h>

int main() {
    int array[5]={10,20,30,40,50};
int min = array[0];

    for(int i = 0; i < 5; i++) {
        if(array[i] < min) {
            min = array[i];

        }
    }
    printf("Min value is : %d\n", min);
    return 0;
}