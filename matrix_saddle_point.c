#include <stdio.h>
int main(){
    int n,m,i,j,k;
    printf("enter number of row and column:");
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("enter a[%d,%d] element of an array:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nmatrix-\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
for (i = 0; i < n; i++){
        int min = a[i][0];
        int column = 0;
        for (j = 0; j < m; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                column = j;
            }
        }
        int max = a[0][column]; 
        for (k = 0; k < n; k++) {
            if (a[k][column] > max) {
                max = a[k][column];
            }
        }
        if (min == max) {
            printf("\n%d is a saddle point found at Row %d, Col %d", min, i, column);
        } else {
            printf("\n%d (min of row %d) is not a saddle point", min, i);
        }
    }
    return 0;
}
