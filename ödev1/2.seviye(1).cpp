#include <stdio.h>
#include <math.h>

float alan(int r)//fonksiyon float t�r�nde tan�mlan�r
{
	float sonuc = 3.14*pow(r,2);//fonksiyon i�lemi yaz�l�r
	return sonuc;
}
int main()
{

	int a;// kullan�cadan al�nacak yar��ap� de�eri tan�mlan�r
	printf("Yaricapi giriniz: "); scanf("%d", &a);//yar��ap tan�mlan�r
	printf("Dairenin alani: %.3f", alan(a));//fonk. �a�r�l�r ve de�er ekrana bast�r�l�r



}
