#include <stdio.h>

void inputArray(int arr1[], int *n){
    printf("Enter the no. of elements: ");
    scanf("%d", n);
    printf("Enter the elements: ");
    for(int i = 0; i < *n; i++){
        scanf("%d", &arr1[i]);
    }
}

void printArray(int arr1[], int n){
    printf("Original array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
}

void cloneArray(int arr1[], int arr2[], int n){
    for(int i = 0; i < n; i++){
        arr2[i] = arr1[i];
    }
}

int main(){
    int arr1[100], arr2[100], n, i;
    inputArray(arr1, &n);

    printf("Original array: ");
    printArray(arr1, n);

    cloneArray(arr1, arr2, n);
    
    printf("Clone Array :");
    printArray(arr2, n);

    return 0;
}