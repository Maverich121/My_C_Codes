#include <stdio.h>
#include <stdlib.h>

int main(){
	float midterm,last,avg;

	printf("enter mid term and final score: ");
	
	scanf("%f%f",&midterm,&last);

	if(last < 70){
		printf("You've failed the this lecture cus your final is lower than 70 :( \n");	
		system("pause");
		return 0;
		}
		
	avg = midterm * 0.4 + last * 0.6;

	printf("Your score %.1f \n",avg);

	if (avg < 60){
		printf("You've failed the this lecture :( \n");

		system("pause");
		return 0;
		}
	else
		printf("Congrats you've passed this lecture! \n");
		
	system("pause");
	return 0;
}