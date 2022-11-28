#include <stdio.h>

int main(){
    int matriksA[10][10], matriksB[10][10], matriksAXB[10][10];
    int i, j, k, n, jumlah=0;
    scanf("%d", &n);
    printf("matriks A\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matriksA[i][j]);
        }
    }
    printf("matriks B\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matriksB[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            for(k=0; k<n; k++){
                jumlah = jumlah + matriksA[i][k] * matriksB[k][j];
            }
            matriksAXB[i][j] = jumlah;
            jumlah = 0;
        }
    }
    printf("matriks AXB\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", matriksAXB[i][j]);
        }
        printf("\n");
    }
    return 0;
}
