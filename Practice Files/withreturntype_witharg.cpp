#include <stdio.h>
int sum (int , int);
main()
{
    int x,y;
	printf("Enter Two Numbers\n");
	scanf("%d%d",&x,&y);
	int a =sum(x,y);
	printf("%d",a);
	
}
int sum (int a , int b)
{
	
	int z=a+b;
	return z;
}
