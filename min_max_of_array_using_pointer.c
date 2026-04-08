#include <stdio.h>
int main(){
    int n;
    printf("enter the number of element in the array :");
    scanf("%d",&n);
    int a[n],*A,i;
    A=a;
    for(i=0;i<n;i++){
        printf("enter the element %d :",i+1);
        scanf("%d",A+i);
    }
    int *max,*min;
    min=a;
    max=a;
    for(i=0;i<n;i++){
        if(*min>*(A+i)){
            min=(A+i);
        }
        if(*max < *(A+i)){
            max=(A+i);
        }
    }
    printf("max element of an array : %d\n",*max);
    printf("min element of an array : %d\n",*min);
    return 0;
}
