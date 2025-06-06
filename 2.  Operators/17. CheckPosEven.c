#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a > 0 && a % 2 == 0)
    printf("The number is positive and even");
    else
    printf("The number is not positive or even");
    return 0;
}