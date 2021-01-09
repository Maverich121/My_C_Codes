/*
	Use arrays when you NEED to store ALL of the values.
*/
#include <stdio.h>
#include <stdlib.h>
/*
	N must be integer
	N must be constant
	N must be a positive
	Use define mostly
*/
#define N 5			// allows you to make changes easily
int main()
{
	int arr[N],i;
	printf("pls enter %d integers: ", N);
	for(i=0;i<N;i++){						// 0'dan N-1 'e
		scanf("%d",&arr[i]);
	}
	for(i=N-1;i>=0;i--){					// N-1'den 0'a
	printf("%d ",arr[i]);
	}


	printf("\n!!! END !!!\n");
	system("pause");
	return 0;
}