#include <stdio.h>
int main(){
    int array[100], n, pos, val, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }printf("\n");
    printf("Enter the new elements: ");
    scanf("%d", &val);
    printf("Enter the position: ");
    scanf("%d", &pos);
    n = n + 1;
    for(i = n; i >= pos; i--)
        array[i] = array[i - 1];
        array[pos - 1] = val;
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
}