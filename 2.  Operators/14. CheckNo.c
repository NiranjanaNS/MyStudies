#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a >= 1 && a <= 100)
    printf("The number between 1 and 100");
    else
    printf("The number is not between 1 and 100");
    return 0;
}