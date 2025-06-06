#include <stdio.h>
int main() {
    int n, arr[100], pos, val, i, j, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of element for deletion: ");
    scanf("%d", &pos);
    if(pos >= 1 && pos <= n) {
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];  
        }
        n--; 
    } else {
        printf("Invalid position!\n");
    }
    printf("Enter the value to delete: ");
    scanf("%d", &val);
    for(i = 0; i < n; i++) {
        if(arr[i] == val) {
            for(j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Value not found!\n");
    }
    printf("Updated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
