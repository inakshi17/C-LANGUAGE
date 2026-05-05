#include <stdio.h>
#include <string.h>

struct driver{
    char name[20];
    int l_no;
    int age;
};
int main(){
    int n;
    printf("enter number of drivers :");
    scanf("%d",&n);
    struct driver d[n];
    int i;
    for(i=0;i<n;i++){
        printf("\ndetails of driver %d -\n",i+1);
        getchar();
        printf("name -");
        gets(d[i].name);
        printf("license number - ");
        scanf("%d",&d[i].l_no);
        printf("age - ");
        scanf("%d",&d[i].age);
    }
    int flag=0;
    printf("eligible to drive-\n");
    for(i=0;i<n;i++){
        if(d[i].age>18 && d[i].age<60){
            printf("name - %s\n",d[i].name);
        }
        flag=1;
    }
    if(flag==0){
        printf("no driver is eligible to drive !!");
    }
    return 0;
}
