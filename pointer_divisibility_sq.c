#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, x;
    printf("enter number of element : ");
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++) {
        printf("enter element %d :", i + 1);
        scanf("%d", (a + i)); 
    }
    printf("original array- ");
    for(i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
    printf("\nenter the divisor : ");
    scanf("%d", &x);
    for(i = 0; i < n; i++) {
        if(*(a + i) % x == 0){
            *(a + i) = (*(a + i)) * (*(a + i));
        }
    }
    printf("\nmodified array- ");
    for(i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }

    free(a); 
    return 0;
}
