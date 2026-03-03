#include <stdio.h>
int count(int n){
    int d,i,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    while(n>0){
        d=n/10;
        if(d==0)
            c0++;
        else if(d==1)
            c1++;
        else if(d==2)
            c2++;
        else if(d==3)
            c3++;
        else if(d==4)
            c4++;
        else if(d==5)
            c5++;
        else if(d==6)
            c6++;
        else if(d==7)
            c7++;
        else if(d==8)
            c8++;
        else if(d==9)
            c9++;
        n=n%10;
    }
    printf("0=%d\n1=%d\n2=%d\n3=%d\n4=%d\n5=%d\n6=%d\n7=%d\n8=%d\n9=%d\n",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
    return 0;
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    count(n);
    return 0;
}
