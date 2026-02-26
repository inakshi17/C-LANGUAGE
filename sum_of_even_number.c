#include <stdio.h>
int main(){
    int a,b,s=0,i;
    printf("enter range of number you want the sum of even number : ");
    scanf("%d%d",&a,&b);
    printf("\neven number between %d to %d : ",a,b);
    for(i=a;i<=b;i++){
        if(i%2==0){
            printf("%d ",i);
            s+=i;
        }
    }
    printf("\nsum of even number betwwen %d to %d : %d",a,b,s);
    return 0;
}
