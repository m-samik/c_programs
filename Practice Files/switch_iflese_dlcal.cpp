//Switch Case & Impliment if else inside switch
#include<stdio.h>
int main()
{
    int ch,a;
    printf("==================I Am Alexa=====================\n");
    printf("I Can Do : \n1. Eligibility for Driving License\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : printf("Eligibility for DL\n");
                 printf("Enter Your Age:\n");
                 scanf("%d",&a);
                 if (a>18)
                 {
                  printf("You are Eligible for the Driving License");
                 }
                 else if (a==18)
                 {
                     printf("Wait for 6 months");
                 }
                 else
                 {
                    printf("Bhai Ek Kaam kr Thoodi Umar Badi Krlai . Wait for : %d years",18-a);    
                 }
        break;
        default : printf("You Entered a Wrong Input");
        
    }
    
    return 0;
}
