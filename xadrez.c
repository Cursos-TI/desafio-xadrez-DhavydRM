#include <stdio.h>

void moverBispo(int casas){ // Recursividade para movimentar o bispo na diagonal de acordo com o quantidade de casas informada
    if(casas > 0){
        printf("Cima!\n");
        printf("Direita!\n");
        moverBispo(casas - 1);
    }
}

void moverTorre(int casas){ // Recursividade para mover a torre para a direita de acordo com a quantidade de casas
    if(casas > 0){
        printf("Direita!\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas){ // Recursividade para mover a Rainha para a esquerda
    if(casas > 0){
        printf("Esquerda!\n");
        moverRainha(casas - 1);
    }
}

int main() {
  
    printf("==== MOVIMENTAÇÕES DE PEÇAS ====\n\n");
    printf("Bispo:\n");
    moverBispo(5); // Move 5 casas do bispo para a Diagonal Superior Direita

    printf("\n");

    printf("Torre:\n");
    moverTorre(5); // Move 5 casas da torre para a Direita

    printf("\n");

    printf("Rainha:\n");
    moverRainha(8); // Move 8 casas da rainha para a Esquerda

    printf("\n");

    printf("Cavalo: \n");
    for(int i = 4, j = 1; i > j || j < 4 ; i--, j++){ // Aumenta o j e diminiu o i exponencialemte
        if (i > j) { // Enquanto o I > J exibe "Cima", ou seja, 2 vezes
            printf("Cima!\n");
        } else { // No momento que chega aqui, quer dizer que o I = 2 e J = 3
            printf("Direita!\n");
            break;
        } // No momento em que o loop para quer dizer que o I = 1 e J = 4.
    } // Move o cavalo em 'L' para Cima e para Direita
    return 0;
}
