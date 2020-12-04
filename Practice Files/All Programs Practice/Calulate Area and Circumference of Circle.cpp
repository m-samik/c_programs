//Program 1: WAP to calculate area and circumference of circle.
#include<stdio.h>
main()
{
	float r,pie=3.142;
	printf("======Program to Calulate Area and Circumference of Circle======");
	printf("\nEnter the Radius of Circle :   ");
	scanf("%f",&r);
	printf("\nThe Area of the Circle is %.2f and the Circumference of Circle is %.3f ",pie*r*r , 2*pie*r);
}
