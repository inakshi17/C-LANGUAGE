#include <stdio.h>
int main(){
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n],*A;
    A=a; // A=&a[0]
    for(i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",A+i);
    }
    int c[n],*C;
    C=c;
    for(i=0;i<n;i++){
        *(C+i)=*(A+i);  
    }
    printf("\noriginal array- ");
    for(i=0;i<n;i++){
        printf("%d ",*(A+i));
    }
    printf("\ncopyed array- ");
    for(i=0;i<n;i++){
        printf("%d ",*(C+i));
    }
    return 0;
}
