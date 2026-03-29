#include <stdio.h>
int main(){
    int n,i,j ;
    printf("enter the order of matrix :");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter your element a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nmatrix -\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
         printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int c=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j] != a[j][i]){
                c++;
            }
        }
    }
    if(c==0) {printf("\nMatrix is Symmetric");}
    else {printf("\nMatrix is not Symmetric");}
    return 0;
}
