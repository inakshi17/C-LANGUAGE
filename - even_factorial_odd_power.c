#include <stdio.h>
int factorial(int n){
    if (n==0 || n==1) return 1;
    else return n*factorial(n-1);
}
int power(int n){
    return n*n;
}
int main(){
    int n;
    printf("enter number of element : ");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("original array :\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    int fact[n],pow[n],cf=0,cp=0,f,p;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            f=factorial(a[i]);
            fact[cf]=f;
            cf++;
        }
        else{
            p=power(a[i]);
            pow[cp]=p;
            cp++;
        }
    }
    printf("factorial array-");
    for(i=0;i<cf;i++){
        printf("%d ",fact[i]);
    }
    printf("\n");
    printf("power array-");
    for(i=0;i<cp;i++){
        printf("%d ",pow[i]);
    }
    return 0;
}
