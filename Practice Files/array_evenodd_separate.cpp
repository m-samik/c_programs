//WAP to print even and odd elements of a array separately.
#include<stdio.h>
int main()
{
	int a[10],sum=0,i;
	printf("Enter Array Elements : \n");
	for(i=0 ; i<10 ; i++)
	scanf("%d",&a[i]);
	printf("Even Elements are :");
	for(i=0 ; i<10 ; i++)
	{
		if(a[i]%2==0)
		printf(" %d  ",a[i]);			
	}
	printf("\nOdd Elements are :");
	for(i=0 ; i<10 ; i++)
	{
		if(a[i]%2!=0)
		printf(" %d  ",a[i]);
	}
	return 0;
}

