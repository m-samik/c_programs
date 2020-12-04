#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter your three Numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		printf("Greater Number is %d",a);
	}
	else if(b>c)
	{
		printf("Greater Number is %d",b);
	}
	else
	{
		
		printf("Greater Number is %d",c);
	}
}	
