#include <stdio.h>
#include <stdlib.h>


int main(){
	int sayi,tahmin;
	int kontrol = 1;
	int min = 0,max = 101;
	int sonuc;
	int counter = 0;

	tahmin = (max + min)/2;
	printf("Aklinizdan 0-100 arasi bir sayi tutunuz:");
	scanf("%d",&sayi);

	while(kontrol){
		
		printf("Tahminim: %d\n",tahmin);
		printf("1: Tahmin Dogru, 2: Tahmin zihnimdeki değerden dusuk,3: Tahmin zihnimdeki degerden buyuk.");
		scanf("%d",&sonuc);

		if (sonuc == 1)
			kontrol = 0;
		
		else if (sonuc == 2)
			{
			min = tahmin;
			tahmin = (max + min)/2;
			}
		else if (sonuc==3)
			{
			max = tahmin;
			tahmin = (max + min)/2;
			}

		counter = counter + 1 ;
	}

	printf("\n Ha ha sayini bildim \n");
	printf("Aklindaki sayiyi %d hamlede bildim\n",counter);

	system("pause");
	return 0;
}