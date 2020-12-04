#include<stdio.h>
main()
{
	char operation;
	int a;
	int b;
	printf("======My First Calculator Program======\n");
	printf("Enter Your Choice of Operation : + | - | * | /\n");
	printf("+ = Addition\n");
	printf("- = Subtraction\n");
	printf("* = Multiplication\n");
	printf("/ = Division\n");
	scanf("%c",&operation);
	if((operation== '+') || (operation== '-') || (operation== '*') || (operation== '/'))
	{
	    printf("Enter Your 1st Number\n");
	    scanf("%d",&a);
	    printf("Enter Your 2nd Number\n");
	    scanf("%d",&b);
	}
	else
	{
	    printf("You Entered a Wrong Operation Value Choose between : + | - | * | / \n");
	}
	switch(operation)
	{
		case '+':
		    printf("The Addition of the two numbers is : %d",a+b);
		    break;
		case '-':
		    printf("The Subtraction of the two numbers is : %d",a-b);
		    break;
		case '*':
		    printf("The Multiplication of the two numbers is : %d",a*b);
	    	break;
		case '/':
		    printf("The Division of the two numbers is : %d",a/b);
		    break;
		default:
			break;
	}
}
