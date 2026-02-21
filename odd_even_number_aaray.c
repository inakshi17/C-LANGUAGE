#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n], e[n], o[n];
    int eCount = 0, oCount = 0;
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            e[eCount++] = a[i];
        } 
        else {
            o[oCount++] = a[i];
        }
    }
    printf("Even array: ");
    for (i = 0; i < eCount; i++) {
        printf("%d ", e[i]);
    }
    printf("\n");
    printf("Odd array: ");
    for (i = 0; i < oCount; i++) {
        printf("%d ", o[i]);
    }
    printf("\n");
    return 0;
}
