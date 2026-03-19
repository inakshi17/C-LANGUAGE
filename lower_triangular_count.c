#include <stdio.h>
int main(){
    int n , m;
    printf("enter the row and column of the array :");
    scanf("%d%d",&n,&m);
        int x;
    printf("enter the X :");
    scanf("%d",&x);
    int a[n][m];
    int i,j,sr=0,sc=0;
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
    int t,c=0;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(a[i][j]>x) c++;
        }
    }
    printf("\ncount = %d",c);
    return 0;
}
