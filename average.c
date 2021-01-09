#include <stdio.h>
#include <stdlib.h>

int main(){
	float number1, number2, average;

	printf("enter two integers so that I can find the average of them \n");

	scanf("%f",&number1);
	scanf("%f",&number2);

	average = (number1 + number2) / 2,0;

	printf("average is %.1f \n ", average);

	system("pause");

	return 0;
}