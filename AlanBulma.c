#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    dairenin �evresini ve alan�n� bulan program
    1-ihtiyac�m�z olan veriables bul ve tan�mla
    2-veriables type bul
    3-kullan�c�dan veri al
    4-form�l� tan�mla alan:pi*r*r , �evre 2*pi*r
    5-i�lem yap
    6-��kt� ver

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
