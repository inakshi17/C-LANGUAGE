#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr1,*arr2,i,n;
    printf("enter the number of element in array :");
    scanf("%d",&n);
    arr1= (int*)malloc(n* sizeof(int));
    arr2= (int*)malloc(n* sizeof(int));
    if (arr1==NULL || arr2==NULL) return 1;
    for(i=0;i<n;i++){
        printf("enter the element %d :",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\noriginal array-\n");
    for(i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i]; 
    }
    printf("\ncopy array-\n");
    for(i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    free(arr1);
    free(arr2);
    return 0;
}
