//	include is used to import the libraries for the different functions we use in C Language.
#include <stdio.h>
//	main is also a function which is necessary to be used at the begining of our program.
main()
{
	//	printf() is used to display output of the text on our monitor screen.
	printf("------------Program to Calculate Sum of two numbers------------\n");
	//	int is used to valuate the integers in our program.
	int a,b;
	printf("Enter Your 1st Number\n");
	//	scanf() is used to take inputs from the user.
	scanf("%d",&a);//	%d is used to tell that input taken is a integer and &a is used to store that value in a vaiable known as a.
	printf("Enter Your 2nd Number\n");
	scanf("%d",&b);
	//	%d,a*b is used to indicate our program that which operation will be performed.
	printf("The Sum of the Numbers you entered is : %d",a*b);
	
}
