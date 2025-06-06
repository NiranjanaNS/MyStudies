#include <stdio.h>
int main(){
    int array[100], i, n, temp, pos1, pos2;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter positions to be swapped: ");
    scanf("%d %d", &pos1, &pos2);
    if(pos1 < 1 || pos1 > n + 1 && pos2 < 1 || pos2 > n + 1){
        printf("Invalid position! Must be between 1 and %d\n", n + 1);
        return 1;
    }
    printf("Original array: ");
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
        temp = array[pos1 - 1];
        array[pos1 - 1] = array[pos2 - 1];
        array[pos2 - 1] = temp;
    printf("After swapping: ");
    for(i = 0; i < n; i++){
    printf("%d ", array[i]);
    }
    return 0;
}