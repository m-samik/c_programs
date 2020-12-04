//For Loop
#include<stdio.h>
/* 
main()
{
	int i;
	for(i=1; i<6 ; i++)
	{
		printf("\n Hello World");
	}
}

main()
{
	int i;
	for(i=20; i<=30; i=i+2)
	{
		printf("\n Number is %d",i);
	}
}


main()
{
	int i,sum=0;
	for(i=1; i<=10; i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
*/

main()
{
	int i,n,fact=1;
	printf("Enter the Number\n");
	scanf("%d",&n);
	for(i=1 ; i<=n ; i++)
	{
		fact=fact*i;
	}
	printf("Factorial of Number is %d",fact);
}
