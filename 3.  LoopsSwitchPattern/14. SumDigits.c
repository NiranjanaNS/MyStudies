#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do{
        sum += n % 10;
        n = n / 10;
    }
    while(n != 0);
    printf("Sum = %d\n", sum);
}