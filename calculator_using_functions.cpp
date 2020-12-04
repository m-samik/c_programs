#include<stdio.h>
int add (int,int);
int sub (int,int);
int div (int,int);
int mul (int,int);
main()
{
	int ch,x,y;
	printf("============My First Calculator Program Using Functions============\n");
	printf("Enter Your Choice of Operation : \n1.Addition (+)\n2.Subtraction (-)\n3.Multiplication (*)\n4.Division (/) \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : printf("Enter Your First Number\n");
			     scanf("%d",&x);
			     printf("Enter Your Second Number\n");
			     scanf("%d",&y);
			     int a=add(x,y);
			     printf("The Sum of Two Numbers is %d",a);
				 break;
		case 2 : printf("Enter Your First Number\n");
			     scanf("%d",&x);
			     printf("Enter Your Second Number\n");
			     scanf("%d",&y);
			     int b=sub(x,y);
			     printf("The Subtraction of Two Numbers is %d",b);
		break;
		case 3 : printf("Enter Your First Number\n");
			     scanf("%d",&x);
			     printf("Enter Your Second Number\n");
			     scanf("%d",&y);
			     int c=mul(x,y);
			     printf("The Multiplication of Two Numbers is %d",c);
		break;
		case 4 : printf("Enter Your First Number\n");
			     scanf("%d",&x);
			     printf("Enter Your Second Number\n");
			     scanf("%d",&y);
			     int d=div(x,y);
			     printf("The Division of Two Numbers is %d",d);
		break;
	}	
}
int add (int a ,int b)
{
	int z=a+b;
	return z;
}
int sub (int a ,int b)
{
	int z=a-b;
	return z;
}
int mul(int a ,int b)
{
	int z=a*b;
	return z;
}
int div(int a , int b)
{
	int z=a/b;
	return z;
}
