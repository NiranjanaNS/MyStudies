#include <stdio.h>
int main() {
       int i, j, n = 1;
    for(i = 5; i >= 1; i--){
        n = i;
        for(j = 5; j >= 1; j--){
            printf("%3d ", n);
            n += 5;
        }printf("\n");
    }
}