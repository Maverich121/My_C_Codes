// 4.11 Calcuating the sum of multiples.

int main()
{
	int x,total = 0;

	for(x=1;x<=100;x++)
		if(x%7 == 0)
			total = x + total;

	printf("%d\n",total);


	system("pause");
	return 0;
}