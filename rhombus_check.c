#include <stdio.h>
#include <math.h>
int main() {
    float s1, s2, s3, s4, d1, d2;
    printf("Enter the lengths of the 4 sides: ");
    scanf("%f %f %f %f", &s1, &s2, &s3, &s4);
    printf("Enter the lengths of the 2 diagonals: ");
    scanf("%f %f", &d1, &d2);
    if (s1 == s2 && s2 == s3 && s3 == s4 && s1 > 0) {
        if (d1 != d2) {
            printf("\nResult: It is a Rhombus.\n");
        } 
        else {
            printf("\nResult: It is a Square (which is a special type of Rhombus).\n");
        }
    } 
   else {
        printf("\nResult: Not a Rhombus.\n");
    }
    return 0;
}
