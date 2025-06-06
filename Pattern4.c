#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1) {
                printf("%d", j);  // First row: 1 2 3 4 5
            } else if (i == n) {
                printf("%d", n - j + 1);  // Last row: 5 4 3 2 1
            } else if (j == n - i + 1) {
                printf("%d", j);  // Diagonal (top-right to bottom-left)
            } else {
                printf(" ");  // Space elsewhere
            }
        }
        printf("\n");
    }

    return 0;
}
