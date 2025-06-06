#include <stdio.h>
int main() {
    int array[100];  
    int n, pos, val, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    printf("Original array:\n");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Enter the position: ");
    scanf("%d", &pos);
    printf("Enter the value: ");
    scanf("%d", &val);
    array[pos - 1] = val;
    printf("Array after updating position %d to %d:\n", pos, val);
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

