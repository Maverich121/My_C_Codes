/*an integer program prints whether an integer taken from user is odd or even
until user wants to end the program.
*/
#include <stdio.h>

int main() {
    
    int integer;
    char choice = 'y';
        
    do{
    printf("Enter an integer to find out whether It's odd or even: ");
    scanf(" %d",&integer);
    
    if(integer%2 == 0)
        printf("This's an even number.");
    else
        printf("This's an odd number.");
        
        printf("\n\nContinue y/n: ");
        scanf(" %c", &choice);

    }while(choice == 'y' || choice == 'Y');
    
    return 0;
}