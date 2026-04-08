#include <stdio.h>
int main(){
    int n;
    printf("enter the number of element in the array :");
    scanf("%d",&n);
    int a[n+1],*A,i;
    A=a;
    for(i=0;i<n;i++){
        printf("enter the element %d :",i+1);
        scanf("%d",A+i);
    }
    printf("original array-\n");
    for(i=0;i<n+1;i++){
        printf("%d ",*(A+i));
    }
    int pos,val,*P;
    P=&pos;
    printf("\n");
    printf("enter the position you want to insert an element :");
    scanf("%d",P);
    printf("enter the value you want to insert :");
    scanf("%d",&val);
    if (*P<0 || *P>n) {
        printf("Invalid position!\n");
    }
    for (i=n;i>*P;i--) {
        *(A+i)=*(A+i-1); 
    }
    *(A + *P) = val;
    printf("\nNew array:\n");
    for(i=0;i<n+1;i++) {
        printf("%d ", *(A + i));
    }
    return 0;
}
