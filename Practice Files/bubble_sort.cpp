//Program for Bubble Sort
#include<stdio.h>
int main()
{
	int i,pass,hold;
	int a[10]={1,7,4,5,6,9,78,85,88,92};
	//Loop to Control no of Passes
	for(pass =1 ; pass < 10 ; pass++)
	{
		for(i=0 ; i<10-1 ; i++)
		{
			if(a[i] > a[i+1])
				{
					hold=a[i];
					a[i]=a[i+1];
					a[i+1]=hold;
				}
		}
	}
	printf("Data in Ascendiing Order ");
	for(i=0 ; i<10 ; i++)
	{
		printf("\n %d",a[i]);
	}
	return 0;
}
