#include<stdio.h>
main()
{
    int n,r,sum=0;
    printf("Enter the Number");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    }
}
