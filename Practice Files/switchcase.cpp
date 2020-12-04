#include<stdio.h>
main()
{
    char ch;
    printf("Enter Your Choice :");
    printf("* | @ | !\n");
    scanf("%c",&ch);
    switch(ch)
    { 
        case '*' : printf("* * *");
        break;
        case '@' : printf("@ @ @");
        break;
        case '!' : printf("! ! !");
        break;
        default:
            printf("Invalid Input");
    }
}


