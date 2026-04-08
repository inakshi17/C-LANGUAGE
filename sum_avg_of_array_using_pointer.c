#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, *A, i;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) 
    return 1;
    A = (int*)malloc(n * sizeof(int));
    if (A == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
    }
    int sum = 0;
    float avg; 
    for(i = 0; i < n; i++) {
        sum += A[i];
    }
    avg = (float)sum / n;
    printf("\nSum of the array: %d\n", sum);
    printf("Average of array: %.2f\n", avg); 
    free(A);
    return 0;
}
