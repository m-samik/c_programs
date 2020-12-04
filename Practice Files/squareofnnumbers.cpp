
#include <stdio.h>
int num,i,p=1;
int main()
{
    printf("Enter Number :  ");
    scanf("%d",&num);
    for (i=1 ; i<=10 ; i++)
    {
        p=p*num;
        printf("%d ki power %d = %d\n",num,i,p);
    }

    return 0;
}

