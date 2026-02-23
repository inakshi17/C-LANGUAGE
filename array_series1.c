#include <stdio.h>
int main() {
    int n,d;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n],s[n/2],i,j=0;
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d", &a[i]);
    }
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i=0;i< n; i += 2) {
        d =pow(a[i], a[i+1]); 
        s[j] = d;                   
        j++;
    }
    printf("New array: ");
    for (i = 0; i <(n/2); i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
    return 0;
}
