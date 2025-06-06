#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a < 1 || a % 2 == 1)
    printf("The number is  negative or odd");
    else
    printf("The number is not  negative or odd");
    return 0;
}