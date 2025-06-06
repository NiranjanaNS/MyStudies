#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter first number:\n");
    scanf("%d", &b);
    if(a < b)
    printf("A is less than B");
    else if(a > b)
    printf("A is greater than B");
    else if(a <= b)
    printf("A is less than or equal to B");
    else if(a >= b)
    printf("A is greater than or equal to B");
    else if(a == b)
    printf("A is equal to B");
    else if(a != b)
    printf("A is not equal to B");
    else
    printf("Something went wrong");
}