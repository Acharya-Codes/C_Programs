#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    
    printf("Enter the number of which u want the multiplication table: ");
    scanf("%d",&a);
    printf("Enter uptil which number u want the table: ");
    scanf("%d",&b);

    for(int i = 1; i <= b; i++) {
        printf("%d * %d = %d\n",a,i,a*i);
    }
    return 0;
}