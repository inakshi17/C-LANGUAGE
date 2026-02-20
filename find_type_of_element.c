#include <stdio.h>
int main()
{char c;
printf("enter the character:");
scanf("%c",&c);
if(c>='a'&&c<='z' || c>='A'&&c<='Z')
printf("\n it is an alphabet:%c",c);
else if(c>='0'&&c<='9')
printf("\n it is a digit:%c",c);
else
printf("\n it is a special character:%c",c);
return 0;
}
