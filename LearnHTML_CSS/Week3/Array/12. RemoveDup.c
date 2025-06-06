#include <stdio.h>
int main() {
    int arr[100], unique[100], n, i, j, k = 0, isDuplicate;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        isDuplicate = 0;
        for(j = 0; j < k; j++) {
            if(arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            unique[k] = arr[i];
            k++;
        }
    }
    for(i = 0; i < k - 1; i++) {
        for(j = 0; j < k - i - 1; j++) {
            if(unique[j] > unique[j + 1]) {
                int temp = unique[j];
                unique[j] = unique[j + 1];
                unique[j + 1] = temp;
            }
        }
    }
    printf("Array after removing duplicates and sorting:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    return 0;
}
