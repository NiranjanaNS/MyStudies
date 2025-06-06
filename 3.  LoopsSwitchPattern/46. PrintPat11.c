#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            printf(" ");
        }
        for (int k = 1; k < 2 * i; k++) {
            printf("* ");
        }
        printf("\n");
    }
}