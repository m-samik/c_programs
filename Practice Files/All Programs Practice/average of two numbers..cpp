//Program 4: WAP to calculate average of two numbers.
#include<stdio.h>
main()
{
	int a,b;
	printf("===Program to Calculate the Average of two Numbers=== \n");
	printf("Enter the First Number : \n");
	scanf("%d",&a);
	printf("Enter the Second Number : \n");
	scanf("%d",&b);
	int sum=a+b;
	printf("The Average of the two numbers is : %d",sum/2);
}
