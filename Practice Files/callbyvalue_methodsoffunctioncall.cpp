//Call by Value Function 
#include<stdio.h>
void display(int);
main()
{
    int a;
    printf("Enter Any Number\n");
    scanf("%d",&a);
    display(a);
    printf("The Value of A is %d",a);
    
}
void display(int p)
{
    p=p+10;
    printf("The Value of the function is %d \n",p);
}
/*
//WAP to swap values of two variables using call by value function.
#include<stdio.h>
void display(int ,int );
main()
{
    int a,b;
    printf("Enter 1st Number\n");
    scanf("%d",&a);
    printf("Enter 2nd Number\n");
    scanf("%d",&b);
    display(a,b);
    printf("\nIn Main() The Value of 1st Number is %d and the value of 2nd Number is %d ",a,b);
    
}
void display(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf(" In Fn() The Value of 1st Number is %d and the value of 2nd Number is %d ",a,b);
}
*/

