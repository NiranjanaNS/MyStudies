#include <stdio.h>
int main() {
    int l, i, n[10];
    printf("Enter 10 number: ");
    for(i = 0; i < 10; i++){
    scanf("%d", &n[i]);
    }
    l = n[0];
    for(i = 0; i < 10; i++){
    if(n[i] > l){
        l = n[i];
    }}
    printf("The largest number is: %d\n", l);
    return 0;
    }