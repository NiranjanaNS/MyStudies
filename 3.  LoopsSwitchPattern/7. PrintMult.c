#include <stdio.h>
int main() {
    int i, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; ++i)
    printf("%d * %d = %d\n", n, i, n * i);
    return 0;
}