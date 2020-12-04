//Program 3: WAP to calculate simple interest.
#include<stdio.h>
main()
{
	int p,t;
	float r;
	printf("Program to calculate simple interest\n");
	printf("Enter the Principle Amount : \n");
	scanf("%d",&p);
	printf("Enter the Rate of Interest in %: \n");
	scanf("%f",&r);
	printf("Enter the time for which Simple Interest is required (in years) : \n");
	scanf("%d",&t);
	printf("The Simple Interset as the data entered is %.2f",p*r*t/100);
}

