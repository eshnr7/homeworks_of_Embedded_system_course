#include <stdio.h>
#include <math.h>

int main( void )
{
	float toplam = 0;//baþlangiç deðeri sýfýr olan toplam deðiþkeni tanýmlandý
	float dizi[5];// 5 sayi ortalamasi istendiði için bu boyutta bir dizi tanýmlandý
	for(int i=0; i<=4; i++){ /* i deðiþkeni counter olarak kullanýldý, ayný zamanda i deðiþkeni dizi elemanlarýnýn yeri olarak kullanýlacaðý için 
	4 küçük eþittire kadarlýk bir for döngüsü yazýldý*/
		printf("%d nolu sayi icin bir deger giriniz: ", i+1); scanf("%f", &dizi[i]); // kullanýcýdan alýnan sayýlar dizi içerisine atandý
		toplam += dizi[i]; // bu deðerler toplandý
	}
	printf("Ortalama : %.2f", toplam/5);// ortalamasý alýnýp ekrana bastýrýldý
}
	
	
