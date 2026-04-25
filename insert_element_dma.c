#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr,n;
    printf("enter the number of element you want in array:");
    scanf("%d",&n);
    arr= (int*)malloc(n*sizeof(int));
    if (arr == NULL) return 1;
    int i;
    for(i=0;i<n;i++){
        printf("enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\noriginal array-\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int m;
    printf("\nenter the number of element you want to insert :");
    scanf("%d",&m);
    if(m>=1){
        int *temp;
        temp= (int*)realloc(arr,(n+m)*sizeof(int));
        if (temp == NULL) return 1;
        arr=temp;
        for(i=n;i<n+m;i++){
            printf("enter element %d :",i+1);
            scanf("%d",&arr[i]);
        }
        printf("\nnew array-\n");
        for(i=0;i<(n+m);i++){
            printf("%d ",arr[i]);
        }
    }
    else {
        printf("no new element inserted !!!");
    }
    free(arr);
    return 0;
}
