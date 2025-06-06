#include <stdio.h>
int main() {
    int a, b, prod;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    prod = a * b;
    printf("The prod is %d", prod);
    return 0;
}