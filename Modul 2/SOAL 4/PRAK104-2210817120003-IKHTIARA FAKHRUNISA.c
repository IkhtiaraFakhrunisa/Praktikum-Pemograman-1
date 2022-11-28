#include <stdio.h>

int main (){
    float a, b, dA, dB, HasilA, HasilB;
    a = 400000;
    b = 350000;
    dA = 13;
    dB = 21;
    HasilA = a- dA/100*a;
    HasilB = b - dB/100*b;

    printf("Harga sepatu A adalah %.f\n", a);
    printf("Harga sepatu B adalah %.f\n", b);
    printf("Sepatu A mendapat diskon sehingga harganya menjadi %.f\n", HasilA);
    printf("Sepatu B mendapat diskon sehingga harganya menjadi %.f\n", HasilB);
    return 0;
}
