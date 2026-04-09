#include <stdio.h>
#include <stdlib.h>
int change(int arr[],int n){
    int search,i;
    printf("enter the element you want to replace :");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(arr[i]==search){
            arr[i]=arr[i]*arr[i]*arr[i];
        }
    }
    return 0;
}
int main() {
    int n,i,*arr;
    printf("total number of element in an array : ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++){
        printf("Enter elements %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("original array :\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    change(arr,n);
    printf("\nnew array :\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
