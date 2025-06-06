#include <stdio.h>

void inputArray(int arr[], int *n){
    printf("enter number of elements: ");
    scanf("%d", n);
    printf("Enter %d elements: ", *n);
    for(int i = 0; i < *n; i++){
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int isValid(int pos, int n){
    return(pos < 1 || pos > n + 1);
}

void swapWithTemp(int arr[], int pos1, int pos2){
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

int main(){
    int array[100], n, pos1, pos2;
    inputArray(array, &n);

    printf("Enter two positions to swap: ");
    scanf("%d %d", &pos1, &pos2);

    if(!isValid(pos1, n) || !isValid(pos2, n)) {
        printf("Invalid positions! Must be between 1 and %d.\n", n);
        return 1;
    }

    printf("Original array: ");
    printArray(array, n);

    swapWithTemp(array, pos1 - 1, pos2 - 1);

    printf("After swapping: ");
    printArray(array, n);
    
    return 0;
}