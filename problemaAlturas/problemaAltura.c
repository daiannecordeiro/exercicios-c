#include<stdio.h>
#include<locale.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");    
}

int main() {
    
    setlocale(SEEK_END,"Portuguese");

    int N, i, qtemenor16;
    double porcentomenor, mediaaltura, somaaltura = 0; 

    printf("Quantas pessoas serão cadastrada? ");
    scanf("%d", &N);

    char nomes[N] [50];
    int idades[N];
    double alturas[N];

    //entrada de dados
    for (i=0; i<N; i++) {
        printf("Dados da %dº pessoa:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
         printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
        printf("\n");
    }

    //calculo da altura média
    for (i=0; i<N; i++) {
        somaaltura += alturas[i];        
    }
    mediaaltura = somaaltura/N;

    //porcentagem menores de 16 anos
    qtemenor16 = 0;
    for (i=0; i<N; i++) {
        if (idades[i]<16) {
            qtemenor16++;
        }
    }
    porcentomenor = ((double)qtemenor16/N)*100;

    //saída de dados
    printf("Altura Média: %.2lf\n", mediaaltura);
    printf("Pessoas menores de 16 anos: %1lf\n", porcentomenor);

    for (i=0; i<N; i++) {
        if (idades[i]<16){
        printf("%s \n", nomes[i]);        
        }
    }

return 0;
}