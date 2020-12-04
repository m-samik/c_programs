#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="iamsami";
    char b[20];
    printf("Enter Your Username : \n");
    scanf("%s",b);
    if(strcmp(a,b)==0)
	{
    printf("Access Granted !!!");
    printf("The Character is %s  ",a);
	}
    else
    printf("Invalid User");
    return 0;
}

