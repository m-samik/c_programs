#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	printf("Enter Your Name :");
	gets(name);
	strupr(name);
	printf("String is %s",name);
	return 0;
}
