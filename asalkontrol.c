#include <stdio.h>
#include <stdlib.h>
/*girilen sayiya göre sayinin asal olup olmadigini kontrol eden
ya da girilen iki basamaklı sayiyi ters ceviren program
*/

int main()
{  int sayi,a,b,i,onlar,birler,yenisayi;
    i=2;
    a=0;
    b=0;



    printf("bir sayi giriniz:\n\n");
    printf("1: Asal sayi kontrolu\n");
    printf("2: Sayiyi tersine cevirme\n\n");
    scanf("%d",&sayi);
    if(sayi==1 || sayi==2){
    if (sayi == 1){

        printf("Pozitif bir sayi giriniz: ");
        scanf("%d",&b);
        if(b<0){

            printf("HATA girilen sayi negatif bir sayidir\n\n");

        }
        break:
        while(i<b/2){
            if (b%i == 0){
                printf("Girilen sayi asal sayi degildir",sayi,i);
                return 0;

            }
            i++;
        }
        printf ("Girilen sayi asaldir");



    }
    if (sayi==2){

        printf("iki basamakli bir sayi giriniz:");
        scanf("%d",&a);

        if (a<10 || a>99){
            printf("lutfen iki basamakli bir sayi giriniz");
            return 0;
        }

        onlar=a/10;
        birler=a%10;
        yenisayi=birler*10+onlar;

        printf("yeni sayi:%d\n",yenisayi);


    }
} else{

    printf("Hatali sayi girdiniz");

}

    return 0;
}
