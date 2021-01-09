#include <stdio.h>

int main()
{
	int input;
	scanf("%d",&input);
	
	
	for (int i = 0;i<input;i++)
	{
	    for (int j=input-1;j>i;j--)
	    {
	        printf(" ");
	    }
	    
	    
	    for (int k=i;k>=0;k--)
	    {
	        printf("*");
	    }
	    
	    printf("\n");
	    
	}

	getchar();
	return 0;
}