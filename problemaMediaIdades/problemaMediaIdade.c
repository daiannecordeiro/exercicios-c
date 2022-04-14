#include<stdio.h>
#include<locale.h>

int main() {

    setlocale(SEEK_END,"Portuguese");

    //variaveis
    int idade, soma, cont;
    double media;

    //entrada e processamento
    printf("Digite as idades:\n");
    scanf("%d",&idade);
    
    soma = 0;
    cont = 0;

    while (idade>=0) { 
        soma += idade;
        cont++;
        scanf("%d",&idade);
    }

    if (cont==0){
        printf("IMPOSSÍVEL CALCULAR");
    } 
    else {
        media = (double) soma/cont;
        printf("Média: %.2lf", media);
    }

return 0; 

}