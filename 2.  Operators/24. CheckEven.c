#include <stdio.h>
int main() {
    int a, b;
    printf("Enter fisrt number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if(a % 2 == 0 && b % 2 == 0)
    printf("Both numbers are even");
    else
    printf("Both numbers are not even");
    return 0;
}