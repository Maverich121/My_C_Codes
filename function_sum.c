#include <stdio.h>
#include <stdlib.h>

void printSum(int,int);
int main()
{
	int num1,num2;
	printf("Enter 2 integers: ");
	scanf("%d%d",&num1,&num2);
	printSum(num1,num2);
	system("pause");
	return 0;
}
void printSum(int input1,int input2)
{	
	int sum=input1+input2;
	printf("Sum of these 2 integers is %d\n",sum);
}