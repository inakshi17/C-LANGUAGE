#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee{
    char name[20];
    int id;
    int salary;
};
int main(){
    FILE *emp;
    struct employee e;
    emp=fopen("employee.txt" , "a");
    int n ,i;
    printf("enter the number of employee :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("employee %d -\n",i+1);
        getchar();
        printf("name:");
        gets(e.name);
        printf("id:");
        scanf("%d",&e.id);
        printf("salary:");
        scanf("%d",&e.salary);
        fprintf( emp, "details of employee %d-\n",i+1);
        fprintf(emp,"name-%s\nid-%d\nsalary-%d\n",e.name,e.id,e.salary);
    }
    fclose(emp);
    char ch;
    printf("\n----- content of the file -----\n");
    emp=fopen("employee.txt","r");
    while((ch=fgetc(emp))!=EOF){
        printf("%c",ch);
    }
    fclose(emp);
    return 0;
}
