#include<stdio.h>
/*
main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d",i);
		i++;
	}
}
*/
main()
{
	int n,r,sum=0;
	printf("Enter No:\n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum is %d",sum);
}
