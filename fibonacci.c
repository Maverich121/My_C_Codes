#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1=1, num2=1, current, count;

	printf("First 20 numbers in fibonacci string:");
	printf("\n1 ");
	printf("1 ");

	for(count=3; count <= 20; count++){
		current = num1 + num2;
		printf("%d ",current);
		num1 = num2;
		num2 = current;
	}
	system("pause");
	return 0;
}