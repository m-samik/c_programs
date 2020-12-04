//Arithmetic Operations on the Top of Pointers
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},*p,sum=0;
	p=a;
	printf("%d",*(p+2));
	for(int i =0 ; i<5 ; i++)
	{
		sum=sum+*(p+i);
	}
	printf("The Sum of Whole Array using Pointers is : %d",sum);
	return 0;
}
