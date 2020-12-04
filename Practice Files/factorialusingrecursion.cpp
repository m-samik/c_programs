#include<stdio.h>
int fact(int);
main()
{
	int n , factorial;
	printf("Enter Number");
	scanf("%d",&n);
	factorial=fact(n);
	printf("\nfactorial is %d",factorial);
}
int fact (int n)
{
	if(n!=1)
	return(n*fact(n-1));
	else
	return 1;
}
