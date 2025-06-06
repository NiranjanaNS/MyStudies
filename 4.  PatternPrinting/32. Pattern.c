#include <stdio.h>
int main() {
    int i, j, n;
    for(i = 'A'; i <= 'E'; i++){
        n = i;
        for(j = 'A'; j <= 'E'; j++){
            printf("%c ", n);
            n += 5;
        }
    printf("\n");
}}
