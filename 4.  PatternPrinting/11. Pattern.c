#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 3; j++){
            printf("%d ", i);
            printf("%d ", j);
        }printf("\n");
    }
}