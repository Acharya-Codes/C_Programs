#include <stdio.h>
int main() {
    FILE *pFile = fopen("input.txt", "r");
    char buffer[1024] = "";
    if (pFile == NULL) {
        printf("Error reading the file");
        return 1;
    }
    while(fgets(buffer,1024,pFile) != NULL){
        printf("%s",buffer);
    }
    fclose(pFile);
    return 0;
}