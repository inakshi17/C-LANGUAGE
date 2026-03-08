#include <stdio.h>
int main() {
    int hours, minutes, seconds;
    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    if (hours >= 0 && hours <= 23 &&
        minutes >= 0 && minutes <= 59 &&
        seconds >= 0 && seconds <= 59){
        printf("Valid time: %d:%d:%d\n", hours, minutes, seconds);
    } else {
        printf("Invalid time entered!\n");
    }
    return 0;
}
