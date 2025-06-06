#include <stdio.h>
int main() {
    int i, j, n = 5, x, y;
    for(i = 5; i >= 1; i--){
       x = i;
       y = n;
       for(j = 0; j >= i; j--){
        if(j <= i){
        if(j % 2 == 1){
            printf("%3d", x);
        }else{
            printf("%3d", y);
        }printf("%3d",j);
        }
        x = x + n;
        y = y + n;
       }printf("\n");
        }
    }