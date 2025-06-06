#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a % 10 == 5)
    printf("%d ends in 5", a);
    else
    printf("%d not ends in 5", a);
    return 0;
}