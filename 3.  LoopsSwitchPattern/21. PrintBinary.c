#include <stdio.h>
int main() {
    int i = 1, n, rem, bin = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    printf("Binary number: %d\n", bin);
    return 0;
}