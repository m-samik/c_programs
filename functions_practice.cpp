#include<stdio.h>
float area (float);
float circumference (float);
main()
{
	int ch;
	float r,out ;
	printf("============Program to Calculate Area and Circumference of the Circle============\n");
	printf("\nEnter Your Choice:\n1.Area of the Circle\n2.Circumference of the Circle\n");
	scanf("%d",&ch);
	printf("Enter the Radius of Circle : \n");
	scanf("%f",&r);
	switch(ch)
	{
		case 1 : out=area(r);
				 printf("The Area of Circle is %.2f",out);
		break;
		case 2 : out=circumference(r);
				 printf("The Circumference of Circle is %.2f",out);
		break;
		default:printf("Tata Bye Bye");
	}
	
}
float area (float x)
{
	float z=3.14*x*x;
	return z;
}
float circumference (float x)
{
	float z=2*3.14*x;
	return z;
}
