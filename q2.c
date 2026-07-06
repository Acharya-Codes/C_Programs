#include <stdio.h>

int main() {
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;

    printf("Enter the product which you wanna buy: \n");
    fgets(item,sizeof(item),stdin);
    printf("Enter the price of the product: \n");
    scanf("%f", &price);
    printf("Enter the quantity of the product: \n");
    scanf("%d", &quantity);

    total = quantity * price;
    printf("Your total amount is: %f",total);

    return 0;
}
