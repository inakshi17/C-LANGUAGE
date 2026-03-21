#include <stdio.h>
int main(){
    int i,j,n,m;
    printf("enter no. of rows and coumns: ");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int b[n][m];
    int c[n][m];
    printf("\nenter element for first array-\n");
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("enter your element a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter element for second array-\n");
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("enter your element b[%d][%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
           c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nfirst array -\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
         printf("%d ",a[i][j]);
        }
        printf("\n");
    } 
    printf("\nsecond array -\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
         printf("%d ",b[i][j]);
        }
        printf("\n");
    } 
    printf("\nSum of both the array -\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
         printf("%d ",c[i][j]);
        }
        printf("\n");
    }       
}
