#include <stdio.h>
#include <math.h>
int main(){
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\narray- ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++){
        a[i]=pow(a[i],a[i]);
    }
    printf("\nnew array- ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
