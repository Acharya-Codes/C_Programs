#include <stdio.h>

void square(int n) {

    for(int i = 1;i <= 4; i++) {

        for(int j = 1; j <= 4; j++) {

            printf("*");

        }

        printf("\n");

    }

}
int main() {

    square(4);

return 0;
}