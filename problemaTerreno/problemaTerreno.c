#include <stdio.h>
#include <locale.h>

int main () {
//variaveis    
    double largura, comprimento, area, valor, preco;
   
    setlocale(LC_ALL, "Portuguese");
//entrada de dados   
    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);

//processamento
    area = largura*comprimento;
    preco = area*valor;

//sa�da de dados
    printf("�rea do terreno: %.2lf metros quadrados\n", area);
    printf("Pre�o do terreno: R$ %.2lf\n", preco);
    
    return 0;
}