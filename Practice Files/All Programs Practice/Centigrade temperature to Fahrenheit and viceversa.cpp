/*Program 5: WAP to convert Centigrade temperature to Fahrenheit and vice versa.
#include<stdio.h>
main()
{
	float temp;
	printf("===Program to Calculate Centigrade to Fahrenheit===\n");
	printf("Enter the Temperature in Centigrade\n");
	scanf("%f",&temp);
	float far=temp*1.8;
	printf("The Conversion to Fahrenheit is :%.2f ",far+32);
}
*/
//Program 5: WAP to convert Fahrenheit temperature to Centigrade 
#include<stdio.h>
main()
{
	float temp;
	printf("===Program to Calculate Fahrenheit to Centigrade ===\n");
	printf("Enter the Temperature in Fahrenheit\n");
	scanf("%f",&temp);
	float cent=temp-32;
	printf("The Conversion to Centigrade  is :%.2f ",cent*.5556);
}
