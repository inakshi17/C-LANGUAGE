#include <stdio.h>
#include <stdlib.h>

int countDigits(int n) {
    if (n == 0) return 1;
    int c = 0;
    if (n < 0) n = -n; 
    while (n > 0) {
        n = n / 10;
        c++;
    }
    return c;
}
int main() {
    int n, i, *arr;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 1;

    arr = (int*)malloc(n * sizeof(int));
    
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nTransformed Output:\n");
    for(i = 0; i < n; i++) {
        int digits = countDigits(arr[i]);

        if (digits == 1) {
            printf("@ ");
        } else if (digits == 2) {
            printf("# ");
        } else {
            printf("$ ");
        }
    }
    printf("\n");

    free(arr);
    return 0;
}
