#include <stdio.h>

int main() {
    
    int n1, n2, somaimpares, i, troca;

    printf("Digite dois numeros:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n1>n2) {
        troca = n1;
        n1 = n2;
        n2 = troca;
    }

    somaimpares = 0;

    for ( i = n1+1; i < n2; i++) {
        if (i%2 != 0) {
            somaimpares += i;
        }
        
    }
    
    printf("SOMA DOS IMPARES: %d", somaimpares);

return 0;
}