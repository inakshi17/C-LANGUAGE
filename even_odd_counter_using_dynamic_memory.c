#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,*arr;
    printf("total number of element in an array : ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
    }
    for(i = 0; i < n; i++){
        printf("Enter elements %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    int counte=0,counto=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            counte++;
        }
        else counto++;
    }
    printf("even number in array : %d\n",counte);
    printf("odd number in array : %d\n",counto);
    free(arr);
    return 0;
}
