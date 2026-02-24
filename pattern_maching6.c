#include <stdio.h>
int main(){
    int n,i,j;
    int num=1;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {     
        for (j = 1; j <= i; j++) {      
            printf("%d ", num);
            num++;                      
            if (num > 9)               
                num = 1;
        }
        printf("\n");                  
    }
    return 0;
}
