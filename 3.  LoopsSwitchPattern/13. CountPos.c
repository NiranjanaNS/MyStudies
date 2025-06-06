#include <stdio.h>
int main (){
    int i, n[10], count = 0;
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++){
    scanf("%d", &n[i]);
    if(n[i] > 0)
    count++;}
    printf("Count = %d", count);
    return 0;
}