#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void path_finder(int arr[20][20])
{
	int path,path_find[20],no_path=0;
	for(int k=0;k<20;k++)
		path_find[k] = 1;

	for(int i=0;i<20;i++)
		for(int j=0;j<20;j++)
			if(arr[j][i]==1)
			{
				path_find[i] = 0;
				no_path++;
				break;
			}

	if(no_path < 20)
	{
		printf("\nPlayer can go through ");

		for(int i=0;i<20;i++)
			if(path_find[i]==1)
			printf("%d. ",i+1);

		printf("path(s).");
	}

	else
		printf("No path found.");

}
int rand_num(int num1,int num2)
{
	int num_min, rand_num;

	num_min = num1;

	if(num2 < num1)
		num_min = num2;

	rand_num = rand()%(abs(num1-num2) + 1) + num_min;

	return rand_num;
}
void game_board(int arr[20][20],char zorluk)
{
	int canavar,x,y;

	if(zorluk == 'e')
		canavar = rand_num(10,20);

	if(zorluk == 'h')
		canavar = rand_num(30,40);

	for(int k=0;k<canavar;k++)
	{	
		x = rand_num(20,0);
		y = rand_num(20,0);

		if(arr[x][y] == 1)
		{
			k--;
			continue;
		}
		arr[x][y] = 1;
	}
		
	for(int i=0;i<20;i++) 
	{
		for(int j=0;j<20;j++)
			printf("%d ",arr[i][j]);

		printf("\n");
	}

	path_finder(arr);
}
int main()
{
	int arr[20][20];
	char zorluk;

	for(int i=0;i<20;i++)
		for(int j=0;j<20;j++)
			arr[i][j] = 0;

	srand(time(NULL));

	printf("Zorluk seviyesi (e/h): ");
	scanf(" %c",&zorluk);
	game_board(arr,zorluk);
	printf("\n\n");
		
	system("pause");
	return 0;
}
