#include <stdio.h>
#include <stdlib.h>
/*
Kullanicidan 4 basamakli birsayi alip
bu sayinin rakamlarini toplayan program
*/
int main()
{
    int myNumber,bolum,kalan,sum;
    sum=0;

    printf("4 basamakli bir sayi giriniz:");
    scanf("%d",&myNumber);
    //4.basamak bul
    bolum= myNumber/ 1000; //9
    sum += bolum;// 0+9
    kalan= myNumber % 1000;//mod alirsan 871
    //3.basamak bul
    bolum= kalan / 100; //8
    sum +=bolum;//0+9+8
    kalan= kalan % 100;//871/100ün modu 71
    //2.basamak bul
    bolum= kalan / 10; //7
    sum +=bolum; //17+7=24
    kalan = kalan % 10; //1
    //1.basamak bul
    sum += kalan;//24+1=25
    printf("Girdiginiz sayinin rakamlari toplami: %d",sum);

    return 0;
}

/*



*/
