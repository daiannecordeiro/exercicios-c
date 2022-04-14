#include<stdio.h>
#include<locale.h>

int main() {

    setlocale(SEEK_END,"Portuguese");

    int N, i;
    double soma, media = 0;

    printf ("Quantos números serão digitados? ");
    scanf("%d", &N);
    double vetor[N];

    for (i=0; i<N; i++){
        printf("Digite um número: ");
        scanf("%lf", &vetor[i]);
    }

    for (i=0; i<N; i++){
        soma += vetor[i];
    }

    media = soma/N;

    printf("VALORES: ");
      for (i=0; i<N; i++){
        printf(" %.1lf ", vetor[i]);        
    }
    printf("\n");
    printf ("SOMA: %.1lf \n", soma);
    printf ("MEDIA: %.1lf", media);

return 0;
}