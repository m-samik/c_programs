//string copy 
#include <stdio.h>
main()
{
char s1[100], s2[100];
int i=0;
puts("\nEnter a string: ");
gets(s1);
printf("\nString 1 is: ");
puts(s1);
while(s1[i]!='\0')
{
s2[i]=s1[i];
i++;
}
s2[i]='\0';
printf("\nString 2 is: ");
puts(s2);
}
