#include <stdio.h>
#include <math.h>

int main( void )
{
	float toplam = 0;//ba�langi� de�eri s�f�r olan toplam de�i�keni tan�mland�
	float dizi[5];// 5 sayi ortalamasi istendi�i i�in bu boyutta bir dizi tan�mland�
	for(int i=0; i<=4; i++){ /* i de�i�keni counter olarak kullan�ld�, ayn� zamanda i de�i�keni dizi elemanlar�n�n yeri olarak kullan�laca�� i�in 
	4 k���k e�ittire kadarl�k bir for d�ng�s� yaz�ld�*/
		printf("%d nolu sayi icin bir deger giriniz: ", i+1); scanf("%f", &dizi[i]); // kullan�c�dan al�nan say�lar dizi i�erisine atand�
		toplam += dizi[i]; // bu de�erler topland�
	}
	printf("Ortalama : %.2f", toplam/5);// ortalamas� al�n�p ekrana bast�r�ld�
}
	
	
