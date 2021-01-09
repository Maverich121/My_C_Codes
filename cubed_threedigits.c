int main(){
    int basamak1,basamak2,basamak3,number=100,cubed;
    
    while(number<=999){
    basamak1=number/100;
    basamak2=(number/10)-(basamak1*10);
    basamak3=number-(basamak1*100+basamak2*10);
    
    cubed = (basamak1+basamak2+basamak3);
    cubed = cubed*cubed*cubed;

    if(number==cubed){
    printf("Number = %d",number);
    break;
    }
    number++;
    }
    
    getchar();
    return 0;
}