//Using While , If Else , Global Variable , Conditions , break , continue , funtions without returntype ||
#include<stdio.h>
int stop;
int incr (void);
int main()
{
    while(1)
    {
         incr(); //function call without retuentype
         printf("To STOP this Program enter 0 and to continue enter any integer\n");
         scanf("%d",&stop);
         if(stop==0)
         break;
    }
   
}
int incr (void)
{
     int start , end;
    printf("Enter the Starting Number : \n");
    scanf("%d",&start);
    printf("Enter the Ending Number : \n");
    scanf("%d",&end);
    while(start >= end )
    {
        printf("The Number is %d \n",start--);
    }
    
}
