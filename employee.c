#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee{
    int id;
    char name[50];
    int salary;
    char dept[50];
};
int display(struct employee e[] ,int n ,int search){
    int i,found=0;
    for(i=0;i<n;i++){
        if(e[i].id==search){
            printf("\nname-%s\nsalary-%d\ndept-%s\n",e[i].name, e[i].salary ,e[i].dept);
            found=1;
            break;
        }
    }
    if(found==0){
            printf("no record found !!");
        }
    return 0;
}
int main(){
    int n, i;
    printf("enter the number of employee :");
    scanf("%d",&n);
    struct employee e[n];
    for(i=0;i<n;i++){
        printf("\nenter the details of employee %d-\n",i+1);
        printf("id-");
        scanf("%d",&e[i].id);
        printf("name-");
        scanf(" %[^\n]", e[i].name);
        printf("salary-");
        scanf("%d",&e[i].salary);
        printf("dept-");
        scanf(" %[^\n]", e[i].dept);
    }
    int search;
    printf("enter the employee id you want the ditails of :");
    scanf("%d",&search);
    display(e,n,search);
    return 0;
}
