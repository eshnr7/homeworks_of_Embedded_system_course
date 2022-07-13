//Katsayýlarý verilen ikinci dereceden denklemin sonucunu bulunuz.

#include <stdio.h>
#include <math.h>


float bir_kok_hesabi(float a, float b, float det);
float iki_kok_hesabi(float a, float b, float det);

int main() {
	
	
	float a, b, c;
	
	printf("a degerini giriniz: \t"); scanf("%f", &a);
	printf("b degerini giriniz: \t"); scanf("%f", &b);	
	printf("c degerini giriniz: \t"); scanf("%f", &c);	
	
	float det = b*b-4*a*c; // detarminant tanýmlandý
	
	float kok1 = bir_kok_hesabi(a, b, det);
	float kok2 = iki_kok_hesabi(a, b, det);
	
	printf("Birinci kok: %f\n", kok1);
	printf("Ýkinci kok: %f", kok2);
	
	return 0;
}

float bir_kok_hesabi(float a, float b, float det){
	
	float result;
	
	float sqr_det = sqrt(det);
	result = (-b+sqr_det)/(2*a);
	return result;
}
float iki_kok_hesabi(float a, float b, float det){
	
	float result;
	
	float sqr_det = sqrt(det);
	result = (-b-sqr_det)/(2*a);
	return result;	
	
}
