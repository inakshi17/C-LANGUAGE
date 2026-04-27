#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a,*b,*c,n,i,m;
    printf("enter the number of element in first array ;");
    scanf("%d",&n);
    a=(int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        printf("enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nfirst array-\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    printf("enter the number of element in second array :");
    scanf("%d",&m);
    b=(int*)malloc(m * sizeof(int));
    for(i=0;i<m;i++){
        printf("enter element %d :",i+1);
        scanf("%d",&b[i]);
    }
    printf("\nsecond array-\n");
    for(i=0;i<m;i++){
        printf("%d ",b[i]);
    }

    c=(int*)malloc( (n+m) * sizeof(int));
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(i=0;i<m;i++){
        c[n+i]=b[i];
    }

    printf("\nthird array-\n");
    for(i=0;i<(n+m);i++){
        printf("%d ",c[i]);
    }
    free(a);
    free(b);
    free(c);
    return 0;
}
