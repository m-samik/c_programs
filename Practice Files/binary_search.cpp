//Program for Binary Search
#include<stdio.h>
int main()
{
	int i,key,location=-1,mid,beg=0,last=9;
	int a[10]={1,3,4,5,6,9,78,85,88,92};
	printf("Enter the Value to Search in Array :  ");
	scanf("%d",&key);
	while(beg<=last)
	{
		mid=(mid+last)/2;
		if(a[mid]==key)
		{
			location=mid;
			break;
		}
		else if (a[mid]>key)
		{
			last=mid-1;
		}
		else if (a[mid]<key)
		{
			beg=mid+1;
		}
	}
	if(location != -1)
		printf("Element Found at %d",location+1);
	else
		printf("Element Not Found");
	return 0;
}
