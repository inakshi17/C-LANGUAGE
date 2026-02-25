#include <stdio.h>
int main(){
    int n,t;
    printf("enter number of student: " );
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++){
        printf("enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    if(n>10){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i]>a[j]){
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
    }
    printf("top 10 marks in %d number of students : ",n);
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
