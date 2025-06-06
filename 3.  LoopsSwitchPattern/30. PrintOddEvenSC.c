#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch(n % 2){
        case 0:
        printf("%d is even\n", n);
        break;
        case 1:
        printf("%d is odd\n", n);
        break;

    }
}