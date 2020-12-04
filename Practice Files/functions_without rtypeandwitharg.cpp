//without return type with arguments

#include<stdio.h>
void sum (int,int);//return type
main()
{
    int a,b;
    printf("=========Welcome to Sum Calculator=========\n");
    printf("Enter your 1st Number\n");
    scanf("%d",&a);
    printf("Enter your 2nd Number\n");
    scanf("%d",&b);
    sum(a,b);
    
}

void sum (int x,int y)
{
    int z;
    z=x+y;
    printf("The Sum of two Numbers is : %d",z);
    
}
