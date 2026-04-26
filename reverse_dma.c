#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int i,n,temp;
    printf("enter the number of element :");
    scanf("%d",&n);
    arr=(int*)malloc( n * sizeof(int));
    for(i=0;i<n;i++){
        printf("enter element %d:");
        scanf("%d",&arr[i]);
    }
    printf("\noriginal array-\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<(n/2);i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("\nreversed array-\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}
