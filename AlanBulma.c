#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    dairenin çevresini ve alanýný bulan program
    1-ihtiyacýmýz olan veriables bul ve tanýmla
    2-veriables type bul
    3-kullanýcýdan veri al
    4-formülü tanýmla alan:pi*r*r , çevre 2*pi*r
    5-iþlem yap
    6-çýktý ver

    */

    float r,alan,Cevre;
    float PI=3.14;
    printf("dairenin yaricapini girin: ");
    scanf("%f",&r);
    alan=r*r*PI;
    Cevre=2*PI*r;

    printf("dairenin alani:%f\n",alan);
    printf("dairenin cevresi:%f",Cevre);
    return 0;
}
