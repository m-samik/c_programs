#include<stdio.h>
int main()
{
    int num,x,fact=1;
    printf("Enter the Number You Want to Find Factorial:\n");
    scanf("%d",&num);
    for(x=1; x<=num ; x++)
    {
        fact=fact*x;
    }
    printf("The Factorial of Number %d is %d",num,fact);
}
