#include <stdio.h>
int main(){
    int n, arr1[100], arr2[100], i, j = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    for(i = n - 1; i >= 0; i--){
        arr2[j] = arr1[i];
        j++;
    }
    for(i = 0; i < n; i++){
        arr1[i] = arr2[i];
    }
    printf("Reverse array is ");
    for(i = 0; i < n; i++){
        printf("%d ", arr1[i]);
    }
    return 0;
}