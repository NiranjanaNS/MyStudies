#include <stdio.h>
int main() {
    int i, j, n = 5;
    for(i =0; i < n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}