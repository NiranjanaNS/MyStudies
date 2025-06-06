#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter fisrt number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    if(a == b && a == c)
    printf("All numbers are equal");
    else
    printf("All numbers are not equal");
    return 0;
}