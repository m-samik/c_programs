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
