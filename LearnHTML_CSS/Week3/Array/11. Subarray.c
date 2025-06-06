#include <stdio.h>
int main() {
    int arr[100], n, i, j, k, targetSum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &targetSum);
    printf("Subarrays with sum %d:\n", targetSum);
    for(i = 0; i < n; i++) {
        int sum = 0;
        for(j = i; j < n; j++) {
            sum += arr[j];
            if(sum == targetSum) {
                printf("Subarray: ");
                for(k = i; k <= j; k++) {
                    printf("%d ", arr[k]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
