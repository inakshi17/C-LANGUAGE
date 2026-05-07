#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    printf("enter number of element : ");
    scanf("%d",&n);
    int *a, i;
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("enter element %d - ",i+1);
        scanf("%d",&a[i]);
    }
    int count=0;
    printf("\narray - ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        if(a[i]<0){
            a[i]=-a[i];
        }
        if(a[i]/10 !=0){
            count++;
        }
    }
    printf("\nmulti digit number - %d",count);
    return 0;
}
