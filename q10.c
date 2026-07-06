#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int getComputerChoice,int getUserChoice);

int main() {
    srand(time(NULL));
    printf("----ROCK PAPER SCICOR----\n");

    int userchoice = getUserChoice();
    int compchoice = getComputerChoice();

    switch(userchoice){
        case 1:
            printf("UserChoice: Rock\n");
            break;
        case 2:
            printf("UserChoice: Scicor\n");
            break;
        case 3:
            printf("UserChoice: Paper\n");
            break;
    }
    switch(compchoice){
        case 1:
            printf("ComputerChoice: Rock\n");
            break;
        case 2:
            printf("ComputerChoice: Scicor\n");
            break;
        case 3:
            printf("ComputerChoice: Paper\n");
            break;
    }
    checkWinner(userchoice,compchoice);
    return 0;

}
int getComputerChoice(){
    return (rand() % 3) + 1 ;
}

int getUserChoice(){
    int choice = 0;
    do{
        printf("1.Rock\n");
        printf("2.Scicor\n");
        printf("3.Paper\n");
        printf("Choose an option: \n");
        scanf("%d", &choice);
    
    }while(choice < 1 || choice > 3);

    return choice;
}

void checkWinner(int userchoice,int compchoice){
    if (userchoice == 1) {
        if (compchoice == 1) {
            printf("Neutralised");
        }else if (compchoice == 2) {
            printf("You won!");
        }else {
            printf("You lost!");
        }
    }   
    if (userchoice == 2) {
        if (compchoice == 1) {
            printf("You lost!");
        }else if (compchoice == 2) {
            printf("Neutralised");
        }else {
            printf("You win!");
        }
    }  
    if (userchoice == 3) {
        if (compchoice == 1) {
            printf("You win!");
        }else if (compchoice == 2) {
            printf("You lost!");
        }else {
            printf("Neutralised");
        }
    }   
    
}
