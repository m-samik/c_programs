#include<stdio.h>
void sum(int,int);
main()
{
	int x,y;
	printf("Enter two Numbers\n");
	scanf("%d%d",&x,&y);
	sum(x,y);
}
void sum (int a , int b)
{
	int z;
	z=a+b;
	printf("The Answer is %d",z);
}
