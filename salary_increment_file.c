#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct fields_Employee{
    int id ;
    char name[20];
    int yoe;
    float salary;
};
int main(){
    int n,i;
    printf("enter the number of employee : ");
    scanf("%d",&n);
    struct fields_Employee e[n];
    for(i=0;i<n;i++){
        printf("\ndetails of employee %d - \n",i+1);
        getchar();
        printf("name : ");
        fgets(e[i].name, sizeof(e[i].name),stdin);
        printf("id : ");
        scanf("%d",&e[i].id);
        printf("yoe : ");
        scanf("%d",&e[i].yoe);
        printf("salary : ");
        scanf("%f",&e[i].salary);
    }
    printf("\n----- without any salary increment -----\n");
    for(i=0;i<n;i++){
        printf("\ndetails of employee %d -\n",i+1);
        printf("name-%s  id-%d  salary-%.2f  year of experience-%d\n"
                ,e[i].name,e[i].id,e[i].salary,e[i].yoe);
    }
    for(i=0;i<n;i++){
        if(e[i].yoe>15)  e[i].salary=e[i].salary + (e[i].salary*0.15);
        else if(e[i].yoe >=10 && e[i].yoe <=15)   e[i].salary=e[i].salary + (e[i].salary*0.10);
        else e[i].salary=e[i].salary + (e[i].salary*0.05);
    }
    printf("\n----- with salary increment -----\n");
    for(i=0;i<n;i++){
        printf("\ndetails of employee %d -\n",i+1);
        printf("name-%s  id-%d  salary-%.2f  year of experience-%d\n"
                ,e[i].name,e[i].id,e[i].salary,e[i].yoe);
    }
    return 0;
}
