//WAP to print multiplication of a number using functions

#include<stdio.h>

void table(int num);
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	table(num);

}
void table(int num) {
	for (int i=1; i<=10; i++ ) {
		printf("%d * %d = %d \n",num, i, num*i);
	}
}
