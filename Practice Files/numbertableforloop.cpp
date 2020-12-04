#include <stdio.h>

int main()
{
    int num ,x ,val;
    printf("Enter the Number for which you want to check the table of : ");
    scanf("%d",&num);
    printf("Enter the Value to which you want to print the table : ");
    scanf("%d",&val);
    for(x=1 ; x<=val ; x++)
    printf("%d x %d = %d \n",num,x,num*x);

    return 0;
}

