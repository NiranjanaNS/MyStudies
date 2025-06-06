#include <stdio.h>
int main() {
    int i, j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){;
            printf("%2d ", i % 2);
        }
    printf("\n");
}
}