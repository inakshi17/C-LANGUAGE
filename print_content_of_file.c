#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    fptr= fopen( "hello.txt", "w");
    fprintf(fptr , "Hello world \nHow are you ???\tIt's 2026");
    fclose(fptr);
    fptr=fopen("hello.txt" , "r");
    char string[100];
    while(fgets(string , 100 , fptr)){
        printf("%s", string);
    }
    fclose(fptr);
    return 0;
}
