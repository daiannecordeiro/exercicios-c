#include<stdio.h>
#include<locale.h>

int main () {

setlocale(SEEK_END,"Portuguese");

int N, i;

printf("Quantos n� ser�o digitados? ");
scanf("%d", &N);
int vetor[N];

for (i=0; i<N; i++) {
    printf ("digite o n�: ");
    scanf("%d", &vetor[i]);
}

print("\n")
printf("N� NEGATIVOS: \n");

for (i=0; i<N; i++) {
    if (vetor[i] < 0) {
        printf("%d\n", vetor[i]);
    }
}
return 0;     
}