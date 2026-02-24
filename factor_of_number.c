#include <stdio.h>
int factor(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        printf("factor of %d-",a[i]);
        for(j=1;j<a[i];j++){
            if(a[i]%j==0){
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}
int main(){
    int n;
    printf("enter number of element:");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\ninput numbers-");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    factor(a,n);
    return 0;
}
