#include <stdio.h>

int main(){

    int rainha = 0, bispo = 0, torre = 0;

    //Programa da Rainha
    printf("\nMovimento da Rainha\n");

    for (rainha; rainha < 8; rainha++){
        printf("Rainha se moveu para a Esquerda\n");
    }
    
    //Programa da Torre
    printf("\nMovimento da Torre\n");

    while(torre < 5){
        printf("Torre se moveu para a Direita\n");
        torre++;
    } 

    //Programa do Bispo
    printf("\nPrograma do Bispo\n");
    do{
        printf("Bispo se moveu para Cima\n");
        printf("Bispo se moveu para Direita\n");
        bispo++;

    } while (bispo < 5);

    //Programa do Cavalo
    int move = 0;

    printf("\nPrograma do Cavalo\n");

    do{
        for(int i = 0; i < 2; i++){
            printf("Cavalo se moveu para Baixo\n");
        }
        printf("Cavalo se moveu para Esquerda\n");
    } while(move--);
    

    return 0;
}
