#include <stdio.h> 
int main() {
    int i, j, n = 1;
    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 5; j++){
            printf("%3d", n);
            n += 2;
        }printf("\n");
        n = n - 8;
    }
}