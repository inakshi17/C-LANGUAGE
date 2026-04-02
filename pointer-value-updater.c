#include <stdio.h>
void update(int *N1,int *N2){
    if(*N1>*N2){
        *N1=(*N1)*(*N1)*(*N1);
        *N2=(*N2)*(*N2);
    }
    else if (*N2>*N1){
        *N2=(*N2)*(*N2)*(*N2);
        *N1=(*N1)*(*N1);
    } 
    else printf("both are equal!\nSo no update for that case\n");
}
int main(){
    int n, n1,n2,*N1,*N2;
    N1=&n1;
    N2=&n2;
    printf("enter your first number :");
    scanf("%d",N1);
    printf("enter your second number :");
    scanf("%d",N2);
    update(N1,N2);
    printf("updated value -\n");
    printf("first number : %d\nSecond number : %d",n1,n2);
    return 0;
}
