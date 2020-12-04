//Program of Sum of Array using pointers
#include<stdio.h>
int main()
{
	int *p,i,sum=0, array[5]={1,2,3,4,5};
	p=array;
	for(i=0 ;i<5 ;i++)
	{
		sum=sum+*(p+i);
	}
	printf("Sum of Array is %d",sum);
	return 0;
}
