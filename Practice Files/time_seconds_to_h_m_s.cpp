#include<stdio.h>
int main()
{
	int num,min,hours,seconds;
	printf("///////////Hours , Minutes ,and Seconds\\\\\\\\\\\n");
	printf("Enter the Number of Seconds  :");
	scanf("%d",&num);
	//Formula for Seconds to Hours
	hours=num/3600;
	//Formula for Seconds to Minutes
	min=(num-(hours * 3600)) / 60;
	//Formula for Remainig Seconds to Seconds
	seconds=(num - (3600*hours) - min*60);
	printf("%d Hours, %d Minutes and %d Seconds",hours,min,seconds);
}
