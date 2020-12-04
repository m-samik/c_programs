#include<stdio.h>
int main()
{
    int number;
    bool isPrime=true;
    printf("Enter the Number to Check Prime or Not\n");
    scanf("%d",&number);
    int i=2;
    while(i<=number/2)
    {
        if(number%i==0)
        {
            isPrime=false;
            break;
        }
        i++;
    }
    {
        if(isPrime){
            printf("The Number is Prime Number");
        }
        else{
            printf("The Number is Not Prime Number");
        }
    }
}

