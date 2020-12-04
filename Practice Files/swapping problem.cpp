//write a program to take input from the user in 2 numbers if first number is smaller then swap the numbers otherwise subtract the two numbers.
/*
My Program
*/
//a=10
//b=20

#include <stdio.h>
main()
{
    int a ;
    int b ;
    int temp;
    printf("Enter Your 1st Number\n");
    scanf("%d",&a);
    printf("Enter Your 2nd Number\n");
    scanf("%d",&b);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
        
        printf("======Numbers Got Swapped======\n");
        printf("The Swapped Numbers are\n");
        printf("1st Number : %d , 2nd Number : %d",a,b);
        
    }
    else
    {
        printf("======Numbers Got Added======\n");
        printf("The Subtraction of the Numbers is %d",a+b);
    }
}
