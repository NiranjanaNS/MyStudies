#include <stdio.h>
int main() {
    int arr[100], n, i, max, min, max_pos, min_pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    max_pos = min_pos = 1;
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
            max_pos = i + 1;
        }
        if(arr[i] < min) {
            min = arr[i];
            min_pos = i + 1; 
        }
    }
    printf("Maximum: %d at position %d\n", max, max_pos);
    printf("Minimum: %d at position %d\n", min, min_pos);
    return 0;
}
