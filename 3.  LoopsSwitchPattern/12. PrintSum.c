#include <stdio.h>
int main() {
    int i, n[5], sum = 0;
    printf("Enter 5 number: ");
    for(i = 1; i <= 5; i++){
    scanf("%d", &n[i]);
    sum += n[i];}
    printf("Sum = %d", sum);
    return 0;
}