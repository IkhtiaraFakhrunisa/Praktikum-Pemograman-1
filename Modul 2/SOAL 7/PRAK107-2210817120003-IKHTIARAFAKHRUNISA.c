#include <stdio.h>

int main (){
    int s1,s2,s3,k,hpm,tb;
    s1 = 4;
    s2 = 5;
    s3 = 7;
    k = s1 + s2+ s3;
    hpm = 85000;
    tb =k * hpm;

    printf("Diketahui: \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d,%d,dan %d\n",s1,s2,s3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", k);
    printf("Harga tanah Per Meter adalah %d\n", hpm);
    printf("Jawaban: \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", tb);
    return 0;
}
