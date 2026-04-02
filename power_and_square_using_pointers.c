#includ <stdio.h>
void change(int n,int *S,int *P){
    while(n>0){
        *S=*S+(n%10);
        *P=*P*(n%10);
        n=n/10;
    }
}
int main(){
    int n,s=0,p=1,*S,*P;
    S=&s;
    P=&p;
    printf("enter your number :");
    scanf("%d",&n);
    change(n,S,P);
    printf("product of each digit : %d\nsum of each digit : %d\n",*P,*S);
    return 0;
}
