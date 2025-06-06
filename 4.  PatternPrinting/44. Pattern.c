#include <stdio.h>
int main() {
    int i, j, n = 0;
    for(i = 1; i < 5; i++){
        n += i;
        for(j = n; j > n - i; j--){            
            printf("%d ", j);
        }printf("\n");
    }
}