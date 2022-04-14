#include<stdio.h>
#include<locale.h>

int main() {

    setlocale(SEEK_END, "Portuguese");

    //variaveis
    int x, y;

    //entrada, processamento e saída
    
    printf("Digite dois números:\n");
    scanf("%d",&x);
    scanf("%d",&y);

    while (x!=y) {
               
        if(x>y) {
            printf("DECRESCENTE!\n");
        } else {
            printf("CRESCENTE!\n");
        }
    printf("\n");
    printf("Digite dois números:\n");
    scanf("%d",&x);
    scanf("%d",&y);
    }    
    
return 0;
}