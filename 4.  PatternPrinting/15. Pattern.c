#include <stdio.h>
int main() {
    int i, j, n = 5, x, y;
    for(i = n; i >= 1; i--){
        x = i;
        y = n - i + 1;
        for(j = n; j >= 1; j--){ 
            if(j % 2 == 1){
                printf("%3d", x);
            }
            else{
                printf("%3d", y);
            }
            x = x + n;
            y = y + n;
        }printf("\n");
    }
}