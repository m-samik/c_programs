//Program to check the Number is in Palindrome or Not
#include<stdio.h>
main()
{
    int r,n,rev=0;
    printf("Enter Any Number");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    
    if(rev==temp)
    printf("number is palindrome");
    else
    printf("number is not palindrome");
}
