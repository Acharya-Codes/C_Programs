#include <stdio.h>
#include <ctype.h>
#include <string.h>
int count1 = 0;
int count2 = 0;
char w[100];
void Checker(){
    int length = strlen(w);
    for(int i = 1; i <= length; i++){
        if(isupper(w[i])){
            count1 = count1 + 1;
        }else if(islower(w[i])){
        count2  = count2 + 1;
    }
    }
}
int main(){
    printf("Enter the word : ");
    scanf("%s",&w);
    Checker();
    printf("The amount of lower case letters in the word is : %d\n",count2);
    printf("The amount of upper case letters in the word is : %d\n",count1);
    return 0;
}