#iclude <stdio.h>
int main(){
int n,i,s=0,d;
printf("enter no of elements");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    printf("enter elements");
    scanf("%d",&a[i]);}
printf("original array :");
for(i=0;i<n;i++){
    printf("%d ",a[i]);}
    printf("\n");
for(i=0;i<n;i++){
    int t;
    t=a[i];
    s=0;
    while(t>0){
    d=t%10;
    s=s+d;
    t=t/10;}
printf("sum of %d element is %d\n",a[i],s);
}
    return 0;
}
