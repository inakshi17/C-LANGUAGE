#include <stdio.h>
int main(){
    char s[100],c=0;
    printf("Enter first string: ");
    gets(s);
    int l,i,counta=0,countd=0,counts=0;
    for(l=0;s[l]!='\0';l++){}
    for(i=0;i<l;i++){
        if((s[i]>='a' && s[i]<='z' )||( s[i]>='A' && s[i]<='Z')){
        counta=counta+1;
        }
    else if(s[i]>='0' && s[i]<='9'){
        countd=countd+1;
        }
    else
    counts=counts+1;
    }
    printf("count of alphabet - %d\n",counta);
    printf("count of digit - %d\n",countd);
    printf("count of special character - %d\n",counts);
    return 0;
}
