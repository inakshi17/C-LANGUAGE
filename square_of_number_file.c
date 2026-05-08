#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *inp,*out;
    inp = fopen("numbers.txt","r");
    out = fopen("square.txt", "w");
    int x;
    printf("\ncontent of input file - ");
    while(fscanf(inp,"%d", &x) != EOF){
        fprintf(out, "%d ", x*x);
        printf("%d ",x);
    }
    fclose(inp);
    fclose(out);
    out = fopen("square.txt","r");
    printf("\ncontent of output file - ");
    while(fscanf(out, "%d", &x) != EOF){
        printf("%d ",x);
    }
    fclose(out);
    return 0;
}
