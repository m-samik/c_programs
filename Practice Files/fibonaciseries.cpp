//Program to get Fibonaci Series.
#include<stdio.h>
int main()
{
	int a,b,c,n;
	a=0;
	b=1;
	printf("Enter the No of Terms : \n");
	scanf(" %d",&n);
	printf("%d%d",a,b);
	for(int i =1 ; i<=n;i++)
	{
		c=a+b;
		c=b;
		b=c;
		printf("%d",c);
	}
	return 0;
}
