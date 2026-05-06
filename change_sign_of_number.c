#include <stdio.h>
#include <string.h>

int main(){
    int n;
    printf("enter number of element : ");
    scanf("%d",&n);
    int *a;
    a=(int *)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++){
        printf("enter your element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\noriginal array - ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nnew array - ");
    for(i=0;i<n;i++){
        if(a[i]==0) printf("%d ",a[i]);
        else{
            a[i]=-a[i];
            printf("%d ",a[i]);
        }
    }
    free(a);
    return 0;
}
