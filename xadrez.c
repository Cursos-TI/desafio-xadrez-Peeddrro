#include <stdio.h>

void Rainha(int rainha) {
    if (rainha > 0){
        printf("Esquerda\n");
        Rainha(rainha - 1);
    }
}

void Torre(int torre){
    if (torre > 0){
        printf("Direita\n");
        Torre(torre - 1);
    }
}


int bispoh, bispov; // h = horizontal e v = vertical
void Bispo(){
    for (bispov = 0; bispov < 1; bispov++){
        for (bispoh = 0; bispoh < 5; bispoh++){
            printf("Cima e Direita\n");
        }
        printf("\n");
    }
}

int main(){

    //Rainha
    printf("\nRainha se moveu para\n");
    Rainha(8); //Chama Rainha com valor oito e vai subtraindo 1 a cada auto chamada

    //Torre
    printf("\nTorre se moveu para\n");
    Torre(5);
  
    //Bispo
    printf("\nBispo se moveu para\n");
    Bispo();

    //Programa do Cavalo
    int cavaloh, cavalov;

    printf("\nPrograma do Cavalo\n");

   for(cavaloh = 0; cavaloh < 7; cavaloh++){ // Adicionei um valor mais alto, pois foi a maneira que encontrei para dar utilidade a comparacao
    for(cavalov = 0; cavalov < 7 ; cavalov++){ // Um loop dentro do loop. O loop externo faz a inicializacao, entao o loop interno roda completamente, apos isso o externo atualiza e se a condicao ainda for verdadeira o interno ira reiniciar, executando tudo novamente.
        printf("Cima\n");
        if (cavalov == 1 && cavaloh == 0){
            break;
        }
        
    } 
    printf("Direita\n");    
    if (cavalov <= 1){
        break;
    }                 
              

    }

    
    
    return 0;
}