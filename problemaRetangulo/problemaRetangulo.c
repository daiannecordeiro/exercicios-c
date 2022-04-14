#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
//variaveis
    double base, altura, area, perimetro, diagonal;

    setlocale(LC_ALL, "Portuguese");
//entrada de dados
    printf("Base do ret�ngulo: ");
    scanf("%lf", &base);
    printf("Altura do ret�ngulo: ");
    scanf("%lf", &altura);
    
//processamento
    area = base*altura;
    perimetro = (base+altura)*2;
    diagonal = sqrt(pow(base,2.0) + pow(altura,2.0));
    // sqrt � para raiz quadrada e pow � para exponencia��o

//sa�da de dados
    printf("�rea: %.4lf\n", area);
    printf("Perimetro: %.4lf\n", perimetro);
    printf("Diagonal: %.4lf\n", diagonal);
    
return 0;
}