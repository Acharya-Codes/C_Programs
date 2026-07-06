#include <stdio.h>
int main() {
    FILE *pFile = fopen("output.txt", "w");
    char text[] = "Yo man how u doin?";
    if (pFile == NULL) {
        printf("Error opening file");
        return 1;
    }
    fprintf(pFile, "%s", text);
    fclose(pFile);
    return 0;
}