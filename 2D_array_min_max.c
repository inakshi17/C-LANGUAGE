#include <stdio.h>
int main(){
    int n , m;
    printf("enter the row and column of the array :");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int i,j,min,max;
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
    min=a[0][0];
    max=a[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
            else if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    printf("\nmaximum element of array : %d",max);
    printf("\nminimum element of array : %d",min);
    return 0;
}
