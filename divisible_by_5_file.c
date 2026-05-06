#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *inp, *f;
    inp=fopen("numbers.txt","r");
    f=fopen("five.txt","w");
    int x;
    printf("content of input file - ");
    while(fscanf(inp,"%d",&x) != EOF){
        printf("%d ",x);
        if(x%5==0){
            fprintf(f,"%d ",x);
        }
    }
    fclose(inp);
    fclose(f);
    f=fopen("five.txt","r");
    printf("\nnumber divisible by 5 - ");
    while(fscanf(f,"%d",&x) != EOF){
        printf("%d ",x);
    }
    fclose(f);
    return 0;
}
