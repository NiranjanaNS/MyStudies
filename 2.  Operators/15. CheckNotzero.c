#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a != 0)
    printf("The number is not equal to zero");
    else
    printf("The number is equal to zero");
    return 0;
}