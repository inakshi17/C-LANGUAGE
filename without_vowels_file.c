#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *inp, *c;
    inp=fopen("hello.txt","r");
    c=fopen("another.txt","w");
    char ch;
    while(fscanf(inp,"%c",&ch) != EOF){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ){ }
        else fprintf(c,"%c",ch);
    }
    fclose(inp);
    fclose(c);
    c=fopen("another.txt","r");
    while(fscanf(c,"%c",&ch) != EOF){
        printf("%c",ch);
    }
    fclose(c);
    return 0;
}
