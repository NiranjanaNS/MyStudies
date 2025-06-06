#include <stdio.h>

int main() {
    int arr1[100], arr2[100], array[200], i, n1, n2;
    printf("Enter the number of elements in 1st array: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in 2nd array: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("Original array 1: ");
    for (i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nOriginal array 2: ");
    for (i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    for (i = 0; i < n1; i++) {
        array[i] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        array[n1 + i] = arr2[i];
    }
    printf("\nMerged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
