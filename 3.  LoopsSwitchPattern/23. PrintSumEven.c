#include <stdio.h>
int main() {
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0){
            i = n % 10;
            n = n / 10;
            if(i % 2 == 0){
            sum += i;}
    }
    printf("Sum = %d\n", sum);
    return 0;
}