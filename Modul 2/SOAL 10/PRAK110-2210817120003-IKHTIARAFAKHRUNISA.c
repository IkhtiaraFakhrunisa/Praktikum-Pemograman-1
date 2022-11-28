#include <stdio.h>
#include <math.h>

int main (){
    float alas,tinggi,miring,k,l;
    alas = 5;
    tinggi = 12;
    miring = sqrt((alas*alas)+(tinggi*tinggi));
    k = alas + tinggi + miring;
    l = 0.5 * alas * tinggi;

    printf("Diketahui : \n");
    printf("Alas = %.f cm\n",alas);
    printf("Tinggi = %.f cm\n\n", tinggi);
    printf("Jawab : \n");
    printf("Sisi A = %.f cm\n",tinggi);
    printf("Sisi B = %.f cm\n",miring);
    printf("Sisi C = %.f cm\n",alas);
    printf("Keliling = %.f cm\n",k);
    printf("Luas = %.f cm\n",l);
    return 0;
}
