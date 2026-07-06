#include <stdio.h>

int main() {
   int choice = 0;
   float pounds = 0.0f;
   float kgs = 0.0f;

   printf("----Welcome to the weight conerting program----\n");
   printf("1.Kilograms to Pounds\n");
   printf("2.Pounds to Kilograms\n");
   printf("Enter your choice (1/2): \n");
   scanf("%d",&choice);

   if (choice == 1) {
    printf("Enter the weight to convert: \n");
    scanf("%f",&kgs);
    kgs = kgs / 2.204;
    printf("Your new weight is: %flbs\n",kgs);
    
   } else if (choice == 2) {
    printf("Enter the weight to convert: \n");
    scanf("%f",&pounds);
    pounds = pounds * 2.204;
    printf("Your new weight is: %fkgs\n",pounds);

   } else {
    printf("Please enter a valid choice!");
   }

    return 0;
}