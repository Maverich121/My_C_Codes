#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_num(int,int);


void show_game_board(int arr[15][15])
{
		for (int i=0;i<15;i++)
		for (int j=0;j<15;j++)
		{
			printf("%d ",arr[i][j]);
			if (j==14)
				printf("\n");
		}
}


void find_path(int arr[15][15])
{	int is_path;
	for (int j=0;j<15;j++)
	{
		is_path = 1;
		for (int i=0;i<15;i++)
			if (arr[i][j] == 1)
			{
				is_path = 0;
				break;
			}

		if (is_path == 1)
		{
			printf("Path found: %d\n",j+1);
			break;
		}
				
	}

	if (is_path == 0)
		printf("Cant find path\n");

}

int main()
{
	// initialize game board.
	srand(time(NULL));
	char choice;
	int n_of_mons,rnd_i,rnd_j;

	int game_board[15][15];
	for (int i=0;i<15;i++)
		for (int j=0;j<15;j++)
			game_board[i][j]=0;

	printf("Select Difficulty Level: (Hard:h,Easy:e)");
	scanf("%c",&choice);

	if (choice =='h')
		n_of_mons = rand_num(16,32);
	if (choice == 'e')
		n_of_mons = rand_num(3,7);

	int to_print = n_of_mons;

	while(n_of_mons>0)
	{
		rnd_i = rand_num(0,14);
		rnd_j = rand_num(0,14);

		if (game_board[rnd_i][rnd_j]==1)
			continue;
		else
		{
			game_board[rnd_i][rnd_j]=1;
			n_of_mons--;
		}
	}

	show_game_board(game_board);

	printf("\n\nNumber of monsters generated: %d\n",to_print);

	find_path(game_board);

	system("pause");
	return 0;


}
int rand_num(int num1,int num2)
{
	int rand_num,num_min;

	num_min = num1;

	if(num1 > num2)
		num_min = num2;

	rand_num = rand()%(abs(num2-num1)+1)+num_min;

	return rand_num;
}
