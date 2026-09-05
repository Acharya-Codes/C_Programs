#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
int Checker(const char * str){
    int len = strlen(str);
    if(len % 2==0){
        return false;
    }
    int mid = len / 2;
    
        for(int i = 1; i <= mid; i++){
            if(tolower((unsigned char)str[mid - i]) != tolower((unsigned char)str[mid + i])){
                return false;
            }
        }
            return true;
        }
int main(){
    char word[100];
    printf("Please enter a word: ");
    if(scanf("%s",&word) == 1){
        if(Checker(word)){
            printf("The word is a Palindromic word\n");
        }else{
            printf("The word is NOT a Palindromic word\n");
        }
    }
    else{
        printf("Please enter a valid word\n");
    }
    
    return 0;
}
    
