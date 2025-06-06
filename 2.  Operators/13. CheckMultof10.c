#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a % 10 == 0)
    printf("The number is a multiple of 10");
    else
    printf("The number is not a multiple of 10");
    return 0;
}