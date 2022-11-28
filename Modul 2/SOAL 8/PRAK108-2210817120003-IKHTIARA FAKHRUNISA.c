#include <stdio.h>

int main (){
    float phi,putaran,jarak,x,r;
    phi = 3.14;
    putaran = 5;
    jarak = 14;
    x = jarak/putaran;
    r = x/(2*phi);

    printf("Diketahui: \n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek =  %.f Kilometer\n\n",jarak);
    printf("Jawaban: \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n",r);
    return 0;
}
