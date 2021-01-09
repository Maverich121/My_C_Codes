#include <stdio.h>
#include <stdlib.h>
int factorial(int);

int main()
{	
	int num,factor;
	printf("Enter a positive integer: ");
	scanf("%d",&num);
	factor = factorial(num);
	printf("factorial of the number is %d\n",factor);

	system("pause");
	return 0;
}
int factorial(int num)
{	
	int result = 1,i;
	for(i=1;i<=num;i++)
	result = result*i;
	return result;
}