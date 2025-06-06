#include <stdio.h>
int main() {
    int i, j, n;
    for(i = 1; i <= 5; i++){
        n = i;
        for(j = 1; j <= 5; j++){
            if(i == 2 && i == 4){
           printf("%2d", n % 2 == 0);}
           else{
            printf("%2d", n % 2);
           }n++;
        }
    printf("\n");
}
}