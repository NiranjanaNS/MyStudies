#include <stdio.h>
int main() {
    int arr[100], n, i, max, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n < 2) {
        printf("Need at least 2 elements to find second largest.\n");
        return 1;
    }
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(arr[0] > arr[1]) {
        max = arr[0];
        second = arr[1];
    } else {
        max = arr[1];
        second = arr[0];
    }
    for(i = 2; i < n; i++) {
        if(arr[i] > max) {
            second = max;
            max = arr[i];
        } else if(arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }
    printf("Second largest element is: %d\n", second);
    return 0;
}
