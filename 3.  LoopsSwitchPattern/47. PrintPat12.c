#include <stdio.h>

int main() {
    int n = 5;
    int i, j;
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (i = n - 1; i > 1; i--) {
        for (j = 1; j <= (i - 1) * 2; j++) {
            printf(" ");
        }
        printf("%d\n", i);
    }
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}
