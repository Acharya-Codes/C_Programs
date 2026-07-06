#include <stdio.h>
#include <string.h>

int main() {

    int arr[5] = {10,20,30,40,50};
    char name[] = "Acharya";

    printf("%d\n", arr[3]);
    for(int i = 0; i < strlen(name); i++) {
        printf("%c",name[i]);
    }

    int scores[5] = {0};

    for(int j = 1; j < 5; j++) {
        printf("Enter a score: ");
    scanf("%d", %score[j]);

    }
    
    for(int i = 0; i < 5; i++){
        printf("%d ",scores[i]);
    }

// 2D Array!!!

    char num[][3] = {{'1','2','3',},
                    {'4','5','6',},
                    {'7','8','9'},
                    {'#','0','*'}};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%c",numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}