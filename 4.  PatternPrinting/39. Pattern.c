#include <stdio.h>
int main(){
    int i, j, n;
    for(i = 5; i >= 1; i--){
        n = i;
        for(j = 5; j >= i; j--){
            printf("%2d", n++);
        }printf("\n");
    }
}