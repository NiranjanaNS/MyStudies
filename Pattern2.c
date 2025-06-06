#include <stdio.h>
int main(){
    int i, j, a = 1, start, end;
    for(i = 1; i <= 4; i++){
        start = a;
        end = a + i;
        for(j = 0; j < i; j++){
            if(i % 2 != 0){
                printf("%3d", end - 1 - j);
            }else{
                printf("%3d", start + j);

            }a = end;
        }
        printf("\n");
    }
}