#include <stdio.h>
int main(){
    int n , m;
    printf("enter the row and column of the array :");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int i,j;
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
    int target;
    printf("enter the element you want to find the position :");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==target){
                printf("position of %d is : [%d,%d]\n",target,i,j);
            }
        }
    }
    return 0;
}
