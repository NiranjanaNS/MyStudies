#include <stdio.h>
int main() {
    int i, j, m = 1,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("%3d", m++);
        }
    printf("\n");
}
}