#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, pos, *arr;
    printf("Enter initial array size: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } 
    else{
        for(int i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
        arr = (int*)realloc(arr, n * sizeof(int));
        printf("Array after deletion: ");
        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    free(arr);
    return 0;
}
