//Insertion of an element in an array
#include<stdio.h>
int main()
{
	int a[5]={1,2,4,5};
	int position,i,value;
	printf("Enter the Position You want to Insert the Array Element");
	scanf("%d",&position);
	printf("Enter the Value to Insert");
	scanf("%d",&value);
	for(i=3 ; i >= position-1 ; i--)
	{
		a[i+1]=a[i];
	}
	a[position-1]=value;
	printf("The Resulatant Array is ");
	for (i=0 ; i<=4 ; i++)
	{
		printf(" %d ",a[i]);
	}
	
}
