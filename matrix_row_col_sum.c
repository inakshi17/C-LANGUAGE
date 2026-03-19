#include <stdio.h>
int main(){
    int n , m;
    printf("enter the row and column of the array :");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int i,j,sr=0,sc=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("enter your element a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("array -\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
         printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nsum of row-\n");
    for(i=0;i<n;i++){
        sr=0;
        for(j=0;j<m;j++){
            sr=sr+a[i][j];
        }
        printf("sum of %d row = %d\n",i+1,sr);
    }
    printf("\nsum of colum-\n");
    for(j=0;j<m;j++){
        sc=0;
        for(i=0;i<n;i++){
            sc=sc+a[i][j];
        }
        printf("sum of %d column = %d\n",j+1,sc);
    }
    return 0;
}
