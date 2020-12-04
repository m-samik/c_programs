#include<stdio.h>
main()
{
    int r,n,rev=0;
    printf("Enter Any Number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse is %d ",rev);
}
