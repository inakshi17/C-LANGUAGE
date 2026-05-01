#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *inp;
    FILE *odd;
    FILE *even;
    inp = fopen("numbers.txt","r");
    odd = fopen("odd.txt","w");
    even = fopen("even.txt","w");
    int n;
    while (fscanf(inp, "%d", &n) != EOF){
        if(n%2==0){
            fprintf(even,"%d ",n);
        }
        else fprintf(odd,"%d ",n);
    }
    fclose(inp);
    fclose(even);
    fclose(odd);
    odd = fopen("odd.txt","r");
    even = fopen("even.txt","r");
    printf("\n----content of even file----\n");
    while (fscanf(even, "%d", &n) != EOF){
        printf("%d ",n);
    }
    printf("\n----content of odd file----\n");
    while (fscanf(odd, "%d", &n) != EOF){
        printf("%d ",n);
    }
    fclose(even);
    fclose(odd);
    return 0;
}
