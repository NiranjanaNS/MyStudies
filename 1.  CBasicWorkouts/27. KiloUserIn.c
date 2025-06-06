#include <stdio.h>
int main() {
    int a;
    printf("Enter Kilometers: ");
    scanf("%d", &a);
    a = a * 1000;
    printf("Kms in ms is %d ms", a);
    return 0;
}