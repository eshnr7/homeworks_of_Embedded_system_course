/*CSV formatýnda yazýlmýþ bir text dosyasýný okuyan bir program yazýnýz.
Dosyadaki en yüksek ve en düþük deðeri buldurtunuz. Ayrýca ortalama
hesaplatýnýz.*/

#include <stdio.h>

int main( void ){
	
	FILE *fp;
	int array[10];
	int i, j;
	float toplam = 0;
	float ortalama;
	
	if ((fp = fopen("basit.csv", "r"))== NULL){
		printf("dosya acilamadi");
		}
	
	for(i = 0; i < 11; i++){
		
		array[i] = fgetc(fp);
	}
	
	
	fclose(fp);
	
	for(i = 0; i < 10; i++) printf("%d\n", array[i]); //for dongusu ile okunur
	
	
	
	for(i = 0; i < 10; i++){ //en büyük sayi
		
		if(array[0] < array[i]) {
			array[0] = array[i];
		}
	}
	printf("En buyuk sayi: %d\n", array[0]);

	for(j = 0; j < 10; j++){ // en kücük sayi
		
		if(array[0] > array[j]) {
			array[0] = array[j];
		}
	}
	printf("En kucuk sayi: %d\n", array[0]);
	
	
	for(i = -1; i<10; i++){//ortalama
		toplam += array[i];
	}
	ortalama = toplam/10;
	printf("Ortalama: %f", ortalama);
	
	
	
	
	return 0;
}







