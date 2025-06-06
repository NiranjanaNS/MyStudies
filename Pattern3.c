#include <stdio.h>

int main() {
    int n = 5; // height of the pyramid
    int i, j;

    for (i = 1; i <= 2 * n - 1; i++) {
        for (j = 1; j <= 2 * n; j++) {
            if (i <= n) {
                // Top half
                if (j <= i) {
                    printf("%d ", j);
                } else if (j >= 2 * n - i + 1) {
                    printf("%d ", 2 * n - j + 1);
                } else {
                    printf("  ");
                }
            } else {
                // Bottom half
                int k = 2 * n - i;
                if (j <= k) {
                    printf("%d ", j);
                } else if (j >= 2 * n - k + 1) {
                    printf("%d ", 2 * n - j + 1);
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
