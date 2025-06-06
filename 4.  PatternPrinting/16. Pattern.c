#include <stdio.h>
int main() {
    int i, j, n;
    for(i = 0; i < 5; i++){
        n = i;
        for(j = 0; j < 5; j++){
            n += 1;
            printf("%3d ", n);
        }
    printf("\n");
}
}