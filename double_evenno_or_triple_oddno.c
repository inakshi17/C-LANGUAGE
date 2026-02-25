#include <stdio.h>
int main(){
    int n,i;
    printf("enter number of element in array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\noriginal array-");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            a[i]=2*a[i];
        }
        else{
            a[i]=3*a[i];
        }
    }
    printf("\nnew array-");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
