#include <stdio.h>
int main() {
    int arr[100] = {7, 3, 4, 2, 6}, position = 2, i, n = 5;
            printf("Array is ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
        printf("\n");
    for(i = position - 1; i < n - 1; i++)
        arr[i] = arr[i+1];
    printf("The updated array is: ");
    for(i = 0; i < n-1; i++)
        printf("%d ", arr[i]);
    return 0;
}