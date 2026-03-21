#include <stdio.h>
int main(){
    int n , m;
    printf("enter the row and column of the array :");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int i,j,c=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("enter your element a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\narray -\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
         printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    if(n==m){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(i+j>n-1){
                    c=c+a[i][j];
                }
            }
        }
    }
    else printf("not a square matrix !!");
    printf("\ncount = %d",c);
    return 0;
}
