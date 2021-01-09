#include <stdio.h>
#include <stdlib.h>

int main( void ){	
	
	int a, b, c, num,min;

	printf("Enter a 3-digit number: ");
	scanf("%d",&num);

	a = num / 100;
	b = (num / 10) - (a * 10);
	c = num - ((a * 100) + (b*10));

	min = a;

	if( b < min )
		min = b;
	if( c < min )
		min = c;

	printf("------------------------------------\n");

	printf("Smallest digit of the number = %d \n",min);

	system("pause");
	return 0;
}