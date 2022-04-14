#include<stdio.h>
#include<locale.h>

int main() {

    //variaveis

    int N, i, j, qtenegativos;
    
    //entrada de dados
    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int matriz[N][N];

    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //saída de dados
    printf("\n");
    printf("DIAGONAL PRINCIPAL:\n");

    for (i=0; i<N; i++) {
        printf(" %d ", matriz[i][i]);
    }

    qtenegativos=0;

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (matriz[i][j] < 0) {
                qtenegativos++;
            }
        }
    }

    printf("\n");
    printf("QUANTIDADE DE NEGATIVOS = %d", qtenegativos);

return 0;
} 