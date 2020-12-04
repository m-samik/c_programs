//without return type without arguments

#include<stdio.h>
void sum (void);
main()
{
    printf("=========Welcome to Sum Calculator=========\n");
    sum();
    
}

void sum (void)
{
    int a,b;
    printf("Enter your 1st Number\n");
    scanf("%d",&a);
    printf("Enter your 2nd Number\n");
    scanf("%d",&b);
    printf("The Sum of two Numbers is : %d",a+b);
    
}
