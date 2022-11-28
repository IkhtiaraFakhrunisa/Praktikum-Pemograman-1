#include <stdio.h>

int main() {
    for(int i = 0; i <= 2; i++){
        int angka1, angka2;
        scanf("%d %d", &angka1, &angka2);

        if(angka1 < angka2) {
            printf("%d %d", angka1, angka2);
        }
        else {
            printf("%d %d", angka2, angka1);
        }}

        return 0;
    }
