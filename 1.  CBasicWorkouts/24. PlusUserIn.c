#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    a = a + 10;
    printf("The numbers are %d, %d", a, b);
    return 0;
}