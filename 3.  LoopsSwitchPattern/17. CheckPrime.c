#include<math.h>
#include <stdio.h>
int main() {
    int i, n, temp = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0){
        temp = 0;}
    } 
    if(temp == 1)
    printf("Prime");
    else
    printf("Not prime");
    return 0;
}