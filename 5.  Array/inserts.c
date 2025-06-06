#include <stdio.h>
int main(){
    int array[100] = {2, 3, 4, 5, 9};
    int n = 5, pos = 3, val = 99, i;
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }printf("\n");
    n = n + 1;
    for(i = n; i >= pos; i--){
        array[i] = array[i - 1];}
        array[pos - 1] = val;
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
}