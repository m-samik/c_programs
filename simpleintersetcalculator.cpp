#include<stdio.h>
main()
{
	// p*t*r/100 p= principle amount t= time r=rate of intersest
	int p,t;
	float r;
	//header for our program
	printf("===================================================================\n");
	printf("================Calculating Simple Interset Program================\n");
	printf("===================================================================\n");
	//header closing
	printf("Enter your principle amount\n");
	scanf("%d",&p);
	printf("Enter time for which to calculate simple interest (In Years)\n");
	scanf("%d",&t);
	printf("Enter Rate of interset in (Percent)\n");
	scanf("%f",&r);
	//footer of the program
	printf("===================================================================\n");
	//formula to calculate simple interset
	printf("Calulated Simple Interest for Your inputs is :%.2f",p*r*t/100);
}
