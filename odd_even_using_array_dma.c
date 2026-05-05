#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    printf("enter number of element :");
    scanf("%d",&n);
    int *a;
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("array-\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\neven number - ");
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            printf("%d ",a[i]);
        }
    }
    printf("\nodd number - ");
    for(i=0;i<n;i++){
        if(a[i]%2 != 0){
            printf("%d ",a[i]);
        }
    }
    free(a);
    return 0;
}
