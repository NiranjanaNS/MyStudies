#include <stdio.h>
int main() {
    int i, n, f = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 2 == 0){
    for(i = 1; i <= n; i++){
    f = f * i;}
    printf("%d\n", f);}
    else {
        printf("odd");
    }
    return 0;
}