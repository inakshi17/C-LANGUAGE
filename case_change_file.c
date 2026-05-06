#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *l,*u;
    l=fopen("lower.txt","w");
    u=fopen("upper.txt","w");
    char str[100];
    printf("enter your string - ");
    fgets(str, sizeof(str), stdin);
    printf("content of lower case file - ");
    puts(str);
    fprintf(l,"%s",str);
    fclose(l);
    l=fopen("lower.txt","r");
    char x;
    while(fscanf(l,"%c",&x) != EOF){
        if(x>='a' && x<='z'){
            x=x-32;
            fprintf(u,"%c",x);
        }
        else fprintf(u,"%c",x);
    }
    fclose(l);
    fclose(u);
    u=fopen("upper.txt","r");
    printf("content of upper case file - ");
    while(fscanf(u,"%c",&x) != EOF){
        printf("%c",x);
    }
    fclose(u);
    return 0;
}
