#include <stdio.h>

int main(){
    
    int num,sayac=1,total=0,count=0;
    float average;
    
    printf("Enter the numbers (10 numbers): ");
    while(sayac<=10){
        scanf("%d",&num);
        if(num%2 != 0){
            total=total + num;
            count++;
        }
    sayac++;
    }
    
    average = (float)(total/count);
    
    printf("The arithmetical average of the %d odd numbers within the entered set %.2f",count,average);
    
    getchar();
    return 0;
}