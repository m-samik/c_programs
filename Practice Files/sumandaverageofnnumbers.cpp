#include<stdio.h>
main()
{
	int a,n,elements,sum=0;
	float average;
	printf("\nEnter how many numbers you want\n");
	scanf("%d",&n);
	printf("\nEnter the numbers one by one\n");
	for(a=0;a<n;a++)
	{
		scanf("%d",&elements);
		sum=sum +elements;
	}
	average=sum/n;
	printf("\nThe Sum of the %d Numbers is : %d",n,sum);
	printf("\nAverage of %d Numbers is : %.2f ",n,average);
}
