#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    int id;
    char name[20];
    int marks;
    int age;
};
int main(){
    int n,i;
    printf("enter the number of element : ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++){
        printf("enter details of student %d - \n",i+1);
        printf("name - ");
        getchar();
        fgets(s[i].name ,sizeof(s[i].name) ,stdin);
        printf("id - ");
        scanf("%d",&s[i].id);
        printf("marks - ");
        scanf("%d",&s[i].marks);
        printf("age - ");
        scanf("%d",&s[i].age);
    }
    for(i=0;i<n;i++){
        if(s[i].age > 18){
            printf("\nname - %s\nid - %d\nmarks - %d\n",s[i].name, s[i].id, s[i].marks);
        }
    }
    return 0;
}
