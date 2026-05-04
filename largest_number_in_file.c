#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *inp;
    inp=fopen("numbers.txt", "r");
    if(inp == NULL){
        printf("empty file !!");
        return 0;
    }
    int l, max=0;
    while(fscanf(inp, "%d",&l) != EOF){
        if(l>max){
            max=l;
        }
    }
    printf("largest number of file : %d",max);
    fclose(inp);
    return 0;
}
