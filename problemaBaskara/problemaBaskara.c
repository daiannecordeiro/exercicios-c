#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {

    setlocale(SEEK_END, "Portuguese");

    //variaveis
    double a, b, c, x1, x2, delta;
    
    //entrada de dados
    printf("Coeficiente a:");
    scanf("%lf", &a);
    printf("Coeficiente b:");
    scanf("%lf", &b);
    printf("Coeficiente c:");
    scanf("%lf", &c);
   
    //processamento esaída de dados
    delta = ( pow(b,2) - (4*a*c) );

    if (delta<0 || a==0) {
        printf("Esta equação não possui raízes reais.\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("X1: %.4lf\n", x1);
        printf("X2: %.4lf", x2);
    }

return 0;    
}