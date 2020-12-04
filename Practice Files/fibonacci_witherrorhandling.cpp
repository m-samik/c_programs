//fibonacci  without recursion
#include<stdio.h>
int main()
{
	//Variables
    int terms,a,b,c,i;
    a=0;
    b=1;
    printf("Enter the Number of Terms You Want to Get Fibonacci Series : \n");
    scanf("%d",&terms);
    //Error Handling for 0  or -ve value
    if(terms<1)
    printf("Not In Order");
    //Error Handling for 1
    else if(terms==1)
    printf("The Numbers are: %d \n",a);
    //All Statements
    else if(terms>1)
    {
        printf("The Numbers are: %d \n",a);
        printf("The Numbers are: %d \n",b);
    }
    //Programing Logic for Fibonacci Series
    for(i=1 ; i<=terms-2 ; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("The Numbers are: %d \n",c);
    }
}
