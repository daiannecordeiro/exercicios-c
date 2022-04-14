#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
//variaveis
    double base, altura, area, perimetro, diagonal;

    setlocale(LC_ALL, "Portuguese");
//entrada de dados
    printf("Base do retângulo: ");
    scanf("%lf", &base);
    printf("Altura do retângulo: ");
    scanf("%lf", &altura);
    
//processamento
    area = base*altura;
    perimetro = (base+altura)*2;
    diagonal = sqrt(pow(base,2.0) + pow(altura,2.0));
    // sqrt é para raiz quadrada e pow é para exponenciação

//saída de dados
    printf("Área: %.4lf\n", area);
    printf("Perimetro: %.4lf\n", perimetro);
    printf("Diagonal: %.4lf\n", diagonal);
    
return 0;
}