#include <stdio.h>
int main() {
    int array[100] = {10, 20, 30, 40, 50};  
    int n = 5, pos = 2, new_val = 99, i;
    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    array[pos - 1] = new_val;
    printf("Array after updating position %d to %d:\n", pos, new_val);
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
