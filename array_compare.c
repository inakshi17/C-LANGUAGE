#include <stdio.h>
int main(){
    int n,i;
    printf("Enter number of characters: ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n; i++){
        printf("enter element %d :",i+1);
        scanf("%d", &a[i]); 
    }
    printf("\noriginal array-");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    int cg=0,cs=0,ce=0,x;
    printf("enter the number (x) : ");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]>x) cg++;
        else if (a[i]==x) ce++;
        else cs++;
    }
    printf("greater than %d : %d",x,cg);
    printf("smaller than %d : %d",x,cs);
    printf("equal to %d : %d",x,ce);
    return 0;
}
