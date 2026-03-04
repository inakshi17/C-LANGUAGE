#include <stdio.h>
int main(){
    int date,month,year;
    printf("enter your date :");
    scanf("%d",&date);
    printf("enter your month :");
    scanf("%d",&month);
    printf("enter your year : ");
    scanf("%d",&year);
    if(date>0 && date<=30 && (month==4  || month==6 || month==9 || month==11)) printf(" valid date");
    else if (date>0 && date <=31 && (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)) printf("valid date");
    else if(month==2){
        if( (year%4==0 && year%100!=0 ) ||  year%400==0){
            if(date>0 && date<=29) printf("valid date");
        }
        else if (date>0 && date<=28) printf("valid date");
        else printf("invalid date");
    }
    else printf("invalid date");
    return 0;
}
