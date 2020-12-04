#include<stdio.h>
int main()
{
    int first,second;
    char add='+',sub='-',mul='*',divi='/',opt;
    printf("Program of Calculator Using If Else\n");
    printf("Enter Your First Number : ");
    scanf("%d",&first);
    printf("Enter Your Second Number : ");
    scanf("%d",&second);
    printf("Operation You Want to Perform : + , - , * , / \n");
    scanf(" %c",&opt);
    if(opt == add )
        printf("Sum of two Numbers is %d",first+second);
    else if(opt == sub)
        printf("Subtraction of two Numbers is %d",first-second);
    else if(opt == mul)
        printf("Multiplication of two Numbers is %d",first*second);
    else if(opt== divi)
        printf("Division of two Numbers is %d",first/second);
    return 0;
}
