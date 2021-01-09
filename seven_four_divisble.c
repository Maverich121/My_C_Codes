#include <stdio.h>

int main() {
    int sayac,num1,num2,count=0;
    printf("Enter the first number: ");
    scanf(" %d",&num1);
    printf("Enter the second number: ");
    scanf(" %d",&num2);
    printf("-----------------------------\n");
   
    sayac=num1;
    
    while(sayac<=num2){
        if(sayac%7==0 && sayac%4==0){
            printf("%d, ",sayac);
            count++;
        }
        sayac++;
    }
    printf("\n%d in total.",count);

    getchar();
    return 0;
}