#include <stdio.h>
#include <stblib.h>

struct student {
    int roll_no;
    char name[50];
    float marks[4];
    char section;
    float total;
};
int main(){
    int i,n,j;
    printf("enter the number of student :");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++){
        printf("enter the details of student %d -\n",i+1);
        printf("roll_no :");
        scanf("%d",&s[i].roll_no);
        printf("section :");
        scanf(" %c",&s[i].section);
        printf("name :");
        gets(s[i].name);
        printf("marks :");
        float avg=0;
        for(j=0;j<4;j++){
            printf("subject %d -",j+1);
            scanf("%f",&s[i].marks[j]);
            avg=avg+s[i].marks[j];
        }
        s[i].total=avg/4;
    }
    float max=s[0].total;
    int index=0;
    for(i=0;i<n;i++){
        if(s[i].total>max){
            max=s[i].total;
            index=i;
        }
    }
    printf("highest marks student -\n");
    printf("name-%s\nroll no-%d\nsection-%c\ntotal marks-%f", s[index].name, s[index].roll_no, s[index].section, s[index].total);
    return 0;
}
