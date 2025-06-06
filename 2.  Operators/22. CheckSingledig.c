#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a <= 9 && a >= -9)
    printf("Single digit number");
    else
    printf("Not Single digit number");
    return 0;
}