/* Multidimentional Array (2-D Array)
1-D Array = int a[4];
2-D Array = int a[2][3]; [2]--> Number of Rows [3]--> Number of Columns.
*/
#include<stdio.h>
int main()
{
	int a[3][3]={1,2,3,4,5,6,7};
	for(int i =0 ; i<3 ; i++)
	{
		printf("\n");
		for(int j=0 ; j<3 ; j++)
		printf("%d\t",a[i][j]);
	}
}
