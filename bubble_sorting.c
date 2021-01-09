#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
	int grade[N],i,tmp,iter;

	for(i=0;i<N;i++)
		scanf("%d",&grade[i]);

	// Bubble sorting N-1 kez tekrar et!!!
for(iter=0;iter<N-1;iter++)
{
	for(i=0;i<=N-1;i++)
	{
		if(grade[i]<grade[i+1])
		{
			tmp=grade[i];
			grade[i]= grade[i+1];
			grade[i+1]=tmp;
		}
	}
}
	for(i=0;i<N-1;i++)
		printf("%d ",grade[i]);

	system("pause");
	return 0;
}