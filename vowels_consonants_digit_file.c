#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *v;
    FILE *inp;
    FILE *c;
    FILE *d;
    inp= fopen("hello.txt","r");
    v= fopen("vowels.txt","w");
    c= fopen("consonants.txt","w");
    d= fopen("digit.txt","w");
    char ch;
    printf("\n-----content of input file-----\n");
    while((ch=fgetc(inp)) != EOF){
        printf("%c",ch);
    }
    rewind(inp);
    while((ch=fgetc(inp)) != EOF){
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||
           ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'){
        fprintf(v,"%c ",ch);
        }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            fprintf(c,"%c ",ch);
        }
        else if (ch>='0' && ch<='9'){
            fprintf(d,"%c ",ch);
        }
    }
    fclose(v); fclose(inp); fclose(c); fclose(d);
    v=fopen("vowels.txt","r");
    printf("\n-----vowels-----\n");
    while((ch=fgetc(v)) != EOF){
        printf("%c ",ch);
    }
    fclose(v);
    c=fopen("consonants.txt","r");
    printf("\n-----consonants-----\n");
    while((ch=fgetc(c)) != EOF){
        printf("%c ",ch);
    }
    fclose(c);
    d=fopen("digit.txt","r");
    printf("\n-----digit-----\n");
    while((ch=fgetc(d)) != EOF){
        printf("%c ",ch);
    }
    fclose(d);
    return 0;
}
