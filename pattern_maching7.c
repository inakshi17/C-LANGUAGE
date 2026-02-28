#include <stdio.h>
int main(){
    int i, j, n;
    printf("enter the nunmer of lines : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            printf(" ");
        }
        for(j=0;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
