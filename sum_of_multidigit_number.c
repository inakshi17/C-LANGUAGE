#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    printf("enter number of element : ");
    scanf("%d",&n);
    int *a;
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("enter element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\narray - ");
    for(i=0;i<n;i++){
        int s=0;
        printf("%d ",a[i]);
        if(a[i]/10 != 0){
            while(a[i]>0){
                s=s+(a[i]%10);
                a[i]=a[i]/10;
            }
            a[i]=s;
        }
    }
    printf("\nnew array - ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    free(a);
    return 0;
}
