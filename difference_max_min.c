#include <stdio.h>
int main() {
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\narray-");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    int max=a[0],min=a[0];
    for(i=1;i<n;i++) {
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
    printf("\nDifference (max - min) = %d\n", max - min);
    return 0;
}
