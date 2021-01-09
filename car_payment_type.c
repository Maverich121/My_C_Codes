#include <stdio.h>
#include <stdlib.h>


int main(){
	char type;
	int km,day,payment=0;

	printf("LandRover(l or L)\nAutomobile(a or A)\nStation(s or S)\nSports(p or P)\n");
	printf("\npress i to quit\n\n");

	while(1)
	{	
		printf("Enter a letter to select a letter : ");
		scanf("%c",&type);

		switch(type)	{
	
		case 'L' :
		case 'l' : 
					printf("how many days you'll drive: ");
					scanf("%d",&day);
					printf("How much km you'll drive: ");
					scanf("%d",&km);	
					payment = day*20 + km*18;
					break;
		case 'A' :
		case 'a' :	
					printf("how many days you'll drive: ");
					scanf("%d",&day);
					printf("How much km you'll drive: ");
					scanf("%d",&km);
					payment = day*32 + km*22;
					break;
				
		case 'S' :
		case 's' :	
					printf("how many days you'll drive: ");
					scanf("%d",&day);
					printf("How much km you'll drive: ");
					scanf("%d",&km);
					payment = day*43 + km*28;
					break;
					
		case 'P' :
		case 'p' :	
					printf("how many days you'll drive: ");
					scanf("%d",&day);
					printf("How much km you'll drive: ");
					scanf("%d",&km);
					payment = day*51 + km*36;
					break;

		case 'i' : 
					printf("system quit\n");
					system("pause");
					return 0;

		default  : 
					printf("wrong letter");

					return 2;

		}

		printf("%d\n",payment);

	}
	system("pause");
	return 0;
}