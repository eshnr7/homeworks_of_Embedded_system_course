//Girilen on tane sayýyý küçükten büyüðe sýralayan program yazýnýz.
#include <stdio.h>

int main( void ){
	int dizi[10]; //tanýmlamalar...
	int id, i, j;
	int girilen, yer_degistirme;
	
	for (id = 0; id < 10; id ++){ 		//diziye sayi eklemek için döngü oluþturuldu
		printf("Bir sayi giriniz: \t"); scanf("%d", &dizi[id]);
	}
	
	for (i = 0; i < 9; i++){
		for (j = i+1; j <10; j++){
			if (dizi[i] > dizi[j]){ // dizinin j. terimi i. terimden büyük olduðu durumu elde etmek için yer deðiþtirme kullanýlacak
				yer_degistirme = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = yer_degistirme;
			}
		}
	}
	printf("Girdiginiz sayilarin kucukten buyuge siralanmis hali:\n");
	for (i = 0; i < 10; i++){
		printf("%d\n", dizi[i]);
	}
	
}
