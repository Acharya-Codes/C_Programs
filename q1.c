#include <stdio.h>
#include <string.h>

int main() {
// Declare usename and password
char username[20];
// Declare correctusername and correctpassword
char password[20];
// correctusername "Admin"
char correct_username[] = "Admin";
// correctpassword 1234
char correct_password[] = "1234";
//input username
printf("Enter the username: ");
scanf("%s", username);
//input password
printf("Enter the password: ");
scanf("%d", password);
// if password < 8
 // length < 8
if(strlen(password)<8) {
    printf("Password must be atleast 8 characters");
  // else password > 8
} else {
      // if
    // username=correctusername
    // password=correctpassword
    // Login success
    if(strcmp(username,correct_username)==0 && strcmp(password,correct_password)==0) {
        printf("Login sucess");
      // else 
            // Invalid User
    } else {
        printf("Invalid User");
    }
    }
    return 0;
}