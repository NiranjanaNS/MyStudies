#include <stdio.h>
int main() {
    int i, j, n = 3;
    for (i = 1; i <= 2 * n - 1; i++) {
        for (j = 1; j <= 2 * n - 1; j++) {
            int min = i;
            if (min > j) min = j;
            if (min > 2 * n - i) min = 2 * n - i;
            if (min > 2 * n - j) min = 2 * n - j;
            printf("%d", min);
        }printf("\n");
    }
    return 0;
}