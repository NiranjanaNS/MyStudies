#include <stdio.h>
int main() {
    int a, b;
    printf("Enter fisrt number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if(a >= b)
    printf("First greater than or equal to the Second");
    else
    printf("Second greater than the First");
    return 0;
}