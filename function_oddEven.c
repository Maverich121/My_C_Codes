#include <stdio.h>
#include <stdlib.h>
void oddEven(int);
int main(){
	int num;
	printf("Enter an integer: ");
	scanf("%d",&num);
	oddEven(num);
	system("pause");
	return 0;
}
void oddEven(int number)
{
	if(number %2 == 1)
		printf("This is an odd number\n");
	else
		printf("This is an even number\n");
}