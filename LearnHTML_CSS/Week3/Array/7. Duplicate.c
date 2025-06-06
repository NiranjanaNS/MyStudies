#include <stdio.h>
int main(){
    int arr[100], n, i, j, visited[100] = {0};
    printf("Enter nuber of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements with position: ");
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(visited[i]) continue;
            if(arr[i] == arr[j]){
                printf("value =  %d , position %d and %d\n", arr[i], i, j);
                    break;
            }
        }
    }
    return 0;
}