#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, *arr;
    printf("Enter array size: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if(pos >= 1 && pos <= n) {
        for(int i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        arr = (int*)realloc(arr, n * sizeof(int));
        printf("Updated array: ");
        for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    } 
    else {
        printf("Invalid position!");
    }
    free(arr);
    return 0;
}
