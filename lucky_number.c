#include <stdio.h>
int main(){
    int l,r,i,d=0,c=0;
    printf("enter the range you want to find the lucky number: ");
    scanf("%d%d",&l,&r);
    printf("\nlucky number between %d to %d : ",l,r);
    for(i=l;i<=r;i++){
        d=i%10;
        if(d==2 || d==3 || d==9){
            printf("%d ",i);
            c++;
        }
    }
    printf("\ntotal lucky number in range %d to %d : %d",l,r,c);
    return 0;
}
