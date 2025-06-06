#include <stdio.h>
int main(){
    int arr1[100], arr2[100], n, i;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Original array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr1[i]);
    }printf("\n");
    for(i = 0; i < n; i++){
        arr2[i] = arr1[i];
    }
    printf("Clone Array :");
    for(i = 0; i < n; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}