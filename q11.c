#include <stdio.h>

float balance = 0;

void checkBalance();
void deposit();
void withdraw();

int main() {
    int choice = 0;

    do {
        printf("\n---Welcome to Aachi's Bank---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Select your choice (1-4): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for visiting!\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 4);

    return 0;
}

void checkBalance() {
    printf("Your balance is: Rs.%.2f\n", balance);
}

void deposit() {
    float amount;
    do {
        printf("Enter the amount to deposit: Rs.");
        scanf("%f", &amount);
        if (amount <= 0)
            printf("Amount must be positive\n");
    } while(amount <= 0);

    balance += amount;
    printf("Rs.%.2f deposited successfully\n", amount);
}

void withdraw() {
    float amount;
    if (balance <= 0) {
        printf("No balance to withdraw\n");
        return;
    }

    do {
        printf("Enter the amount to withdraw: Rs.");
        scanf("%f", &amount);
        if (amount <= 0)
            printf("Amount must be positive\n");
        else if (amount > balance)
            printf("Insufficient balance. You have Rs.%.2f\n", balance);
    } while(amount <= 0 || amount > balance);

    balance -= amount;
    printf("Rs.%.2f withdrawn successfully\n", amount);
}