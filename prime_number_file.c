#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *pn;
    FILE *npn;
    FILE *inp;
    int n, i;
    inp= fopen("numbers.txt","r");
    pn= fopen("prime.txt","w");
    npn = fopen("not_prime.txt","w");
    while (fscanf(inp, "%d", &n) != EOF){
        int c = 0; 
        for (i = 1; i <= n; i++){
            if (n % i == 0){
                c++;
            }
        }
        if(c == 2){
            fprintf(pn, "%d ", n);
        } 
        else{
            fprintf(npn, "%d ", n);
        }
    }
    fclose(inp);
    fclose(pn);
    fclose(npn);
    pn= fopen("prime.txt","r");
    npn = fopen("not_prime.txt","r");
    printf("\n----prime number----\n");
    while(fscanf(pn, "%d", &n) != EOF){
        printf("%d ",n);
    }
    printf("\n----not a prime number----\n");
    while(fscanf(npn, "%d", &n) != EOF){
        printf("%d ",n);
    }
    fclose(pn);
    fclose(npn);
    return 0;
}
