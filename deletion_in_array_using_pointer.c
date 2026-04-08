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
    printf("original array-\n");
    for(i=0;i<n;i++){
        printf("%d ",*(A+i));
    }
    int pos,*P;
    P=&pos;
    printf("\n");
    printf("enter the position you want to delete an element :");
    scanf("%d",P);
    if ( *P<1 || *P>n) {
        printf("Invalid position!\n");
        return 1; 
    }
    for (i=*P-1; i<n-1; i++) {
        *(A+i) =*(A+i+1);
    }
    printf("new array-\n");
    for(i=0;i<n-1;i++){
        printf("%d ",*(A+i));
    }
    return 0;
}
