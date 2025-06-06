#include <stdio.h>
int main() {
    int a;
    printf("Enter first number: ");
    scanf("%d", &a);
    a = a * a;
    printf("The sum is %d", a);
    return 0;
}