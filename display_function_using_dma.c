#include <stdio.h>
#include <stdlib.h>

int display(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
int main(){
    int *a,n,i;
    printf("enter the number of element :");
    scanf("%d",&n);
    a=(int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        printf("enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    display(a,n);
    free(a);
    return 0;
}
