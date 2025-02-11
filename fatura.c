#include <stdio.h>
#include <stdlib.h>
/*
 Bir elektrik daðýtým þirketi verdikleri
 hizmet karþýlýðýnda müþterilerden aylýk
 olarak harcanan toplam kilowatt saat miktarýnca
 ve belirli bir abonelik ücreti talep etmektedir
 birim kilowatt saat ücreti ve abonelik ücreti her ay
 aylýk enflasyon oranýnda artmaktadýr.
 buna göre müþterinin bir aya ait ödeyeceði
 elektrik faturasýnýn miktarýný hesaplayan program:
 fatura miktarý = harcanan elektrik * birim fiyat + abonelik ücreti


*/
int main()
{
    float odenecekFatura,eskiBimFiyat,yeniBirimFiyat;
    float enflasyon,eskiAboneUcreti,yeniAboneucreti;
    int yeniOkuma,eskiOkuma,toplamHarcananElektrik;

    printf("Enflasyon oranini giriniz:");
    scanf("%f",&enflasyon);
    printf("onceki aya ait birim fiyat miktarini girin:");
    scanf("%f",&eskiBimFiyat);
    printf("onceki aya ait abonelik ucretini girin:");
    scanf("%f",&eskiAboneUcreti);
    printf("onceki aya ait okuma degerini giriniz:");
    scanf("%d",&eskiOkuma);

    printf("bu aya ait okuma degerini giriniz:");
    scanf("%d",&yeniOkuma);

    toplamHarcananElektrik=yeniOkuma-eskiOkuma;
    yeniBirimFiyat=eskiBimFiyat*(1+enflasyon/100);
    yeniAboneucreti=eskiAboneUcreti*(1+enflasyon/100);

    odenecekFatura=toplamHarcananElektrik*yeniBirimFiyat+yeniAboneucreti;
    printf("odenecek fatura tutari:%f\n\n\n ",odenecekFatura);

    return 0;
}
