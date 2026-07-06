#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    printf("Enter the number of players: ");
    scanf("%d",&choice);
    int *score =calloc(choice, sizeof(int));
    if(score == NULL) {
        printf("Memory allocation failed\n");
    }
    for(int i =0; i < choice; i++){
        printf("Enter the score: %d", i+1);
        scanf("%d",&score[i]);
    }
    int new;
    printf("Do you want new scores: ");
    scanf("%d",&new);
    int *temp = realloc(score,new * sizeof(int));
    if (temp == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }else{
        score = temp;
        for(int i = choice; i < new; i++){
        printf("Enter the score: %d", i+1);
        scanf("%d",&score[i]);

        for(int i = choice; i < new; i++){
        printf("%d ",score[i]);
    
        }
    }
    return 0;
}
}