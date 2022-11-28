#include <stdio.h>

int main (){
    int a,b,c,a1,b1,c1;
    a = 4;
    b = 8;
    c = 3;
    a1 = a==b;
    b1 = a>=c;
    c1 = a!=c;

    printf("Variabel a bernilai %.d\n", a);
    printf("Variabel b bernilai %.d\n", b);
    printf("Variabel c bernilai %.d\n", c);
    printf("Apakah a sama dengan b? jawabannya adalah %d\n", a1);
    printf("Apakah b lebih besar dari c? jawabannya adalah %d\n",b1);
    printf("Apakah a tidak sama dengan c? jawabannya adalah %d\n",c1);
    return 0;
}
