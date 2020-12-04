#include<stdio.h>
int add (int,int);
int sub (int,int);
int divn (int,int);
int mul (int,int);
main()
{
	int ch,x,y,out;
	printf("============My First Calculator Program Using Functions============\n");
	printf("Enter Your Choice of Operation : \n1.Addition (+)\n2.Subtraction (-)\n3.Multiplication (*)\n4.Division (/) \n");
	scanf("%d",&ch);
	if (ch>=1 && ch <=4) {
	printf("Enter Your First Number\n");
	scanf("%d",&x);
	printf("Enter Your Second Number\n");
	scanf("%d",&y);
	
	switch(ch)
	{
		case 1 : out=add(x,y);
			     printf("The Sum of Two Numbers is %d",out);
				 break;
		case 2 : out=sub(x,y);
			     printf("The Subtraction of Two Numbers is %d",out);
				 break;
		case 3 : out=mul(x,y);
			     printf("The Multiplication of Two Numbers is %d",out);
		         break;
		case 4 : out=divn(x,y);
			     printf("The Division of Two Numbers is %d",out);
			     break;
		default : printf("Entered Wrong Input");
	}
}
else{
	printf("Entered Wrong Input");
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
int divn(int a , int b)
{
	int z=a/b;
	return z;
}


