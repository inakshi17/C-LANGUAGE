#include <stdio.h>
#include <string.h>

int main(){
    int n;
    printf("enter number of element in your array :");
    scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++){
        printf("enter your element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    int sum=0; float avg;
    printf("array-\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("\naverage - %0.2f",avg);
    printf("\nelement less then %.01f - ");
    for(i=0;i<n;i++){
        if(arr[i]<avg){
            printf("%d ",arr[i]);
        }
    }
    printf("\nelement greater then %.01f - ");
    for(i=0;i<n;i++){
        if(arr[i]>avg){
            printf("%d ",arr[i]);
        }
    }
    free(arr);
    return 0;
}
