#include <stdio.h> 

int main () {

//variaveis
    double nota1, nota2, notaFinal;

//entrada de dados
    printf("Digite a primeira nota:");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota:");
    scanf("%lf", &nota2);

//processamento
    notaFinal = (nota1 + nota2);

//saída de dados
    printf("Nota Final: %.1lf \n", notaFinal);

//estrutura de decisão
    if (notaFinal < 60.0) {
        printf("REPROVADO");
    }
    else {
        printf("APROVADO");
    }

return 0;
}