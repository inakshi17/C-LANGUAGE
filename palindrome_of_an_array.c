#include <stdio.h>
int main(){
    int n;
    printf("enter the number of element in an array :");
    scanf("%d",&n);
    int a[n],b[n],i;
    for(i=0;i<n;i++){
        printf("enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("array-\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    int t,j,p=0;
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            p++;
        }
    }
    if(p==0) printf("palindrome");
    else printf("not palindrome");
    return 0;
} 
