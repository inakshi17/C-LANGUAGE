#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    fptr= fopen("hello.txt","a");
    char string[100];
    printf("enter the content you want to enter :");
    gets(string);
    fprintf(fptr,string);
    char ch;
    fclose(fptr);
    fptr = fopen("hello.txt","r");
    printf("\n----content of file----\n");
    while((ch=fgetc(fptr))!=EOF){
        printf("%c",ch);
    }
    fclose(fptr);
    return 0;
}
