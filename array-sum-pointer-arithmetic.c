#include <stdio.h>
int main(){
    int n;
    printf("enter the number of element :");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("array-\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    int s=0;
    int *A;
    A=&a[0];
    for(int i=0;i<n;i++){
        s=s+*A;
        printf("\nelement - %d\naddress - %u\n",*A,A);
        A++;
    }
    printf("\nsum of all elemnet of array - %d",s);
    return 0;
}
