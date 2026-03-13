#include <stdio.h>
int main(){
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
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            a[i]=a[i]*a[i];
        }
        else a[i]=a[i]*a[i]*a[i];
    }
    printf("\nnew array-");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
