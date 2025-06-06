#include <stdio.h>
int main() {
    int i, j, n, x = 1, y;
    for(i = 5; i >= 1; i--){
        y = i;
        n =  x;
        for(j = 5; j >= i; j--){      
            printf("%d ", n);
            n = n - y;
            y++;
        }x = x + i;
        printf("\n");
    }
    return 0;
}