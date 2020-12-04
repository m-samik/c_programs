#include<stdio.h>
int sum(void);
main()
{
	int a= sum();
}
int sum(void)
{
	int x,y;
	printf("Enter First Number\n");
	scanf("%d",&x);
	printf("Enter Second Number\n");
	scanf("%d",&y);
	int z=x+y;
	printf("The Sum of Two Numbers is %d",z);
	return (z);
}
