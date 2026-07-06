#include <stdio.h>

int main() {
    int array[5] = {10,7,2,4,6};
    printf("Even numbers in the array: ");
    for(int i = 0; i < 5; i++) {
        if(array[i] % 2 == 0) {
            printf("%d ", array[i]);
        }
    }
    printf("Odd numbers in the array: ");
    for(int i = 0; i < 5; i++) {
        if(array[i] % 2 != 0) {
            printf("%d ", array[i]);
        }
    }
    return 0;
}
