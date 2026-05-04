#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *s;
    int m,n,i;
    char name[100];
    printf("enter the number of student :");
    scanf("%d",&n);
    s=fopen("student.txt","w");
    for(i=0;i<n;i++){
        printf("details of student %d -\n",i+1);
        getchar();
        printf("name of student :");
        gets(name);
        printf("marks of student :");
        scanf("%d",&m);
        fprintf(s, "%s - %d\n", name, m);
    }
    fclose(s);
    s=fopen("student.txt","r");
    if (s == NULL) return 1;
    char ch;
    printf("\n--- content of file ----\n");
    while((ch=fgetc(s)) != EOF){
        printf("%c",ch);
    }
    printf("\n");
    rewind(s);
    int x, max=0, f=0; 
    float sum=0;
    char tempname[100], topstudent[100];
    while(fscanf(s, "%s - %d", tempname, &x) != EOF){
        sum=sum+x;
        if(x>max){
            max=x;
            strcpy(topstudent,tempname);
        }
        if(x < 50) {
            f++;
        }
    }
    printf("\n--- Results ---\n");
    printf("Largest score:\nName - %s\nMarks - %d\n", topstudent, max);
    printf("\nAverage score of class - %.2f\n", sum / n);
    printf("Students failed: %d\n", f);
    fclose(s);
    return 0;
}
