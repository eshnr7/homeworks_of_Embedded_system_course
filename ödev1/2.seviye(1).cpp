#include <stdio.h>
#include <math.h>

float alan(int r)//fonksiyon float türünde tanýmlanýr
{
	float sonuc = 3.14*pow(r,2);//fonksiyon iþlemi yazýlýr
	return sonuc;
}
int main()
{

	int a;// kullanýcadan alýnacak yarýçapý deðeri tanýmlanýr
	printf("Yaricapi giriniz: "); scanf("%d", &a);//yarýçap tanýmlanýr
	printf("Dairenin alani: %.3f", alan(a));//fonk. çaðrýlýr ve deðer ekrana bastýrýlýr



}
