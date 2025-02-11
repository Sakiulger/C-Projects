#include <stdio.h>
#include <stdlib.h>
/*
 Bir elektrik da��t�m �irketi verdikleri
 hizmet kar��l���nda m��terilerden ayl�k
 olarak harcanan toplam kilowatt saat miktar�nca
 ve belirli bir abonelik �creti talep etmektedir
 birim kilowatt saat �creti ve abonelik �creti her ay
 ayl�k enflasyon oran�nda artmaktad�r.
 buna g�re m��terinin bir aya ait �deyece�i
 elektrik faturas�n�n miktar�n� hesaplayan program:
 fatura miktar� = harcanan elektrik * birim fiyat + abonelik �creti


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
