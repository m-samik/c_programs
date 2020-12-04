//WAP to calculate the sum of all elements of Array.
#include<stdio.h>
int main()
{
	int a[5],i;
	int sum=0;
	printf("\n######################### ARRAY OPERATIONS #########################\n");
	for(i=1 ; i<6 ; i++)
	{
		printf("\n%d Number : ",i);
		scanf("%d",&a[i]);
	}
	for(i=1 ; i<6 ; i++)
	{
		sum=sum+a[i];
	}
	printf("\nThe Sum of whole Array is %d",sum);
	return 0;
}
