/* Problem Given Below
(--a)- (a--) - a + (a++) + a;
*/
#include<stdio.h>
main()
{
    int a=2;
    int c=(--a)- (a--)- a+ (a++)+ a;
    printf("The Value of c is %d",c);
}
//here a-- updates the value of a by -1 and the value of b is not updated.
//--a updates both values at the same time .
//++a updates the both at the same time.
//a++ updates the value of a by +1 and the value of b is not updated
//1-2-2+2+2

