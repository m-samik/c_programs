//Program for Linear Search
#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,4,98,78,8};
	int i,key,location=0;
	printf("Enter the Value to Search in Array :  ");
	scanf("%d",&key);
	for(i=0 ; i<10 ; i++)
	{
		if(a[i]==key)
		{
			location=i+1;
			break;
		}
	}
	if(location != 0)
	printf("Element Found at %d",loc);
	else
	printf("Element Not Found");
}
