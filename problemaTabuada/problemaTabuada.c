#include<stdio.h>

int main() {

    int n, i, resultado;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for (i = 1; i < 11; i++)
    {
        resultado = n*i;
        printf("%d x %d = %d \n",n,i,resultado);
    }
    
return 0;    
}