#include <stdio.h>
#include <stdlib.h>

int main(){
    char *a;
    int i,n;
    printf("enter the size of array :");
    scanf("%d",&n);
    a=(char*)malloc(n* sizeof(char));
    if(a==NULL) return 1;
    for(i=0;i<n;i++){
        printf("enter the element %d :",i+1);
        scanf(" %c",&a[i]);
    }
    printf("array-\n");
    for(i=0;i<n;i++){
        printf(" %c",a[i]);
    }
    char max=a[0];
    char min=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        else if(a[i]<min){
            min=a[i];
        }
    }
    printf("\nmax element of the array : %c",max);
    printf("\nmin element of an array : %c",min);
    free(a);
    return 0;
}
