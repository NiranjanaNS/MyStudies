#include <stdio.h>
int main(){
    int arr[100], n, i, j, visited[100] = {0}, count[100] = {0};
    printf("Enter nuber of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Frequency of each element:\n");
    for(i = 0; i < n; i++){
        if(visited[i]) continue;
        count[i] = 1;
        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count[i]++;
                visited[j] = 1;
            }
        }
        printf("value =  %d , frequency = %d\n", arr[i], count[i]);
    }
    return 0;
}