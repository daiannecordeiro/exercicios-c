#include<stdio.h>

int main() {

//variaveis

    int N, M, i, j, soma;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &N);

    printf("Qual a quantidade de coluna da matriz? ");
    scanf("%d", &M);

    int matriz[N][M], vetorsoma[N];

    for (i=0; i<N; i++) {
        printf("Digite os elementos da %da. linha:\n", i+1);
        for (j=0; j<M; j++) {
            scanf("%d", &matriz[N][M]);
        }
    }

    for (i=0; i<N; i++) {
        soma = 0;
        for (j=0; j<M; j++) {
            soma = soma + matriz[i][j];
        }
        vetorsoma[i] = soma;
    }

    printf("VETOR GERADO:\n");
    for (i=0; i<N; i++) {
        printf("%d\n", vetorsoma[i]);
    }

return 0;
}