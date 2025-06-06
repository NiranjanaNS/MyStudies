#include <stdio.h>
int main() {
    int i, j, n = 5, x = 1, y = n, t1, t2, r1, r2;;
    for(i = n; i >= 1; i--){
        t1 = x;
        t2 = y;
        r1 = i;
        r2 = i + 1;
        for(j = n; j >= i; j--){
            if(i + j % 2 == 0){
                printf("%d ", t1);
            }
            else{
                printf("%d ", t2);
            }
            t1 = t1 - r1++;
            t2 = t2 - r2++;
        }
        y = y + i - 1;
        x = x + i;
        printf("\n");
    }
    return 0;
}