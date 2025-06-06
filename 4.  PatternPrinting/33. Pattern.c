#include <stdio.h>
int main() {
    int i, j, n;
    for(i = 'E'; i >= 'A'; i--){
        n = i;
        for(j = 'E'; j >= 'A'; j--){
            printf("%c ", n);
            n += 5;
        }
    printf("\n");
}}
