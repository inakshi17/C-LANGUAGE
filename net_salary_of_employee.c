#include <stdio.h>
#include <string.h>

struct employee{
    char name[20];
    int id;
    int salary;
};
int main(){
    int n,i;
    printf("enter number of employee : ");
    scanf("%d", &n);
    struct employee e[n];
    for(i=0;i<n;i++){
        printf("\ndetails of employee %d -\n",i+1);
        getchar();
        printf("name - ");
        fgets(e[i].name,sizeof(e[i].name),stdin);
        printf("id - ");
        scanf("%d",&e[i].id);
        printf("salary - ");
        scanf("%d",&e[i].salary);
    }
    
    int hra,bs,ta,ns=0,flag=0;
    printf("\nnet salary between 10000 to 20000 - \n");
    for(i=0;i<n;i++){
        bs=e[i].salary;
        hra=(bs*8)/100;
        ta=(bs*10)/100;
        ns=bs+hra+ta;
        if(ns>=10000 && ns<=20000){
            printf("\nname - %s    id - %d\n",e[i].name,e[i].id);
            flag=1;
        }
    }
    if(flag==0) printf("no one !!");
    return 0;
}
