/* This program prints a triangle using characters, based on the height and
base of the user's input.
EXAMPLE OUTPUT:
Enter an integer: 4
|| *
|| **
|| ***
|| ****
*/
#include <stdio.h>
int main(){   
    
    int row,num,n;
    
    printf("enter an integer: ");
    scanf("%d",&num);
    
    do{
    for(n=1;n<=num;n++)
    printf("*");
    
    printf("\n");
    }while(num-->0);
    
getchar();    
return 0;
}