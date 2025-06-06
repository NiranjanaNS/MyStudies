#include <stdio.h>
int main(){
    int arr[100], n, i, pos, val;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]); 
    }
    printf("Enter where the number to be inserted: ");
    scanf("%d", &pos);
    if(pos < 1 || pos > n + 1){
        printf("Invalid position! Must be between 1 and %d\n", n + 1);
        return 1;
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &val);
    for(i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;
    printf("Final array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}