#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    printf("Enter the number of players");
    scanf("%d",&choice);
    int *score =calloc(choice, sizeof(int));
    if(score == NULL) {
        printf("Memory allocation failed");
    }
    for(int i =0; i < score; i++){
        printf("Enter the score %d", i+1);
        scanf("%d",choice[i]);
    }
    for(int i =0; i < score; i++){
        printf("%d",choice[i]);
    }
    return 0;
}