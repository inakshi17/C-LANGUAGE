#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    printf("enter the string :");
    gets(s);
    int i,found=0;
    int l=strlen(s);
    char f;
    printf("enter the finding element :");
    scanf("%c",&f);
    for(i=0;i<l;i++){
        if(s[i]==f){
            printf("first Occurrence : %d\n",i+1);
            found++;
            break;
        }
    }
    for(i=l-1;i>=0;i--){
        if(s[i]==f){
            printf("last Occurrence : %d\n",i+1);
            break;
        }
    }
    if(found==0) printf("%c not found",f);
    return 0;
}
