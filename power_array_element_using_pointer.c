#include <stdio.h>
#include <math.h>

int main() {
    int n, d;
    printf("Enter number of elements (must be even): ");
    scanf("%d", &n);
    int a[n];
    int s[n / 2];
    int *ptr_a = a; 
    int *ptr_s = s;
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", (ptr_a + i)); 
    }
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr_a + i));
    }
    printf("\n");
    for (int i = 0; i < n; i += 2) {
        d = pow(*(ptr_a + i), *(ptr_a + i + 1));
        *(ptr_s + (i / 2)) = d;
    }
    printf("New array : ");
    for (int i = 0; i < (n / 2); i++) {
        printf("%d ", *(ptr_s + i));
    }
    printf("\n");
    return 0;
}
