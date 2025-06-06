#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a < 0)
    printf("The number is NEGATIVE");
    else
    printf("The number is POSITIVE");
    return 0;
}