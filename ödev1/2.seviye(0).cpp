#include <stdio.h>
#include <math.h>
int main()
{
	int not;// not deðiþkeni tanýmlanýr

	 
	printf("Notunu giriniz: "); scanf("%d", &not);// kullanýcýdan not girmesi istenir
	
	if (not <= 100 && not >= 90) printf("Harf notunuz AA\n");// if else if yapýsý altýnda not kontrolü yapýlýr
	else if (not <= 89 && not >= 85) printf("Harf notunuz BA\n");
	else if (not <= 84 && not >= 80) printf("Harf notunuz BB\n");
	else if (not <= 79 && not >= 75) printf("Harf notunuz CB\n");
	else if (not <= 74 && not >= 65) printf("Harf notunuz CC\n");
	else if (not <= 64 && not >= 60) printf("Harf notunuz DC\n");
	else if (not <= 59 && not >= 55) printf("Harf notunuz DD\n");
	else if (not <= 54 && not >= 50) printf("Harf notunuz FD\n");
	else if (not <= 49 && not >= 0) printf("Harf notunuz FF\n");
	


}
