#include <stdio.h>
int main() {
    float a, b, avg;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    avg = (a + b) / 2;
    printf("The average is %f", avg);
    return 0;
}