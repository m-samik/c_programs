#include<stdio.h>
int fibonacci (int);
main()
{
	int n,x,i;
	printf("Enter the Number of Terms : \n");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		x=fibonacci(i);
		printf("%d",x);
}
}
int fibonacci (int a)
{
	if(a==1 || a==0)
	return a;
	else
	return (fibonacci(a-1)+fibonacci(a-2));
}
	

