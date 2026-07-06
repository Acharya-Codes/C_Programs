#include <stdio.h>
int add(int x, int y) {
    int result = x+y;
    return result;
}
int main() {
    int result = add(6,9);
    printf("%d",result);
    return 0;
} // We can use the same variable name given that they are in different scopes!