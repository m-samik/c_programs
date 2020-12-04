#include<stdio.h>
int main()
{
    int A = 10;
    int i=1;
    printf("%d\n",A);
    printf("i=%d\n",i);
    A= A + ++i;
    printf("%d\n",A);
    printf("i=%d\n",i);
    return 0;
}
