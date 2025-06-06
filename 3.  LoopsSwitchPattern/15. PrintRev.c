#include <stdio.h>
int main() {
    int n, rev;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse number is: ");
    do{
        rev = n % 10;
        n = n / 10;
        printf("%d", rev);
    }
    while(n != 0);
    return 0;
}