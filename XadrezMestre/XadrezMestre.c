#include <stdio.h>

// ---------------------------------------
// TORRE (5 casas para a direita) - recursão
// ---------------------------------------

void moverTorre(int movimentosRestantes) {
    if (movimentosRestantes <= 0) {
        return; // Condição de parada
    }
    printf("Direita\n");
    moverTorre(movimentosRestantes - 1); // Chamada recursiva
}

// ---------------------------------------
// BISPO (5 casas na diagonal superior direita)
// Requer: recursividade + loops aninhados
// Cada passo equivale a "Cima" + "Direita"
// ---------------------------------------
void moverBispoRecursivo(int movimentosRestantes) {
    if(movimentosRestantes <= 0) {
       return; // Condição de parada
    }

    // Loops aninhados: externo = vertical, interno = horizontal
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispoRecursivo(movimentosRestantes - 1); // Recursão
}

// ---------------------------------------
// RAINHA (8 casas para a esquerda) - recursão
// ---------------------------------------
void moverRainha(int movimentosRestantes) {
    if (movimentosRestantes <= 0) {
        return; // Condição de parada
    }
    printf("Esquerda\n");
    moverRainha(movimentosRestantes - 1); // Chamada recursiva
}

// ---------------------------------------
// CAVALO (movimento em L: duas casas para cima e uma para a direita)
// Requer loops aninhados + múltiplas condições + continue/break
// ---------------------------------------
void moverCavalo() {
    int movimentosCima = 2;
    int movimentosDireita = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo controla o movimento vertical
    for (int i = 1; i <= movimentosCima; i++) {
        printf("Cima\n");

        // Loop interno controla o movimento horizontal
        for (int j = 1; j <= movimentosDireita; j++) {        
            // Só imprime a "Direita" após completar as duas subidas
            if (i < movimentosCima) {
                continue; // Pula até terminar o movimento vertical
            }  

           // Condição extra de segurança
           if (i == movimentosCima && j == movimentosDireita) {
              printf("Direita\n");
              break; // Sai do Loop interno após imprimir 

           }
        }
    }
}

// ---------------------------------------
// FUNÇÃO PRINCIPAL
// ---------------------------------------
int main() {
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;

    // ---------------- TORRE ----------------
    printf("Movimento da Torre:\n");
    moverTorre(movimentosTorre);

    printf("\n");

    // ---------------- BISPO ----------------
    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(movimentosBispo);

    printf("\n");

    // ---------------- RAINHA ----------------
    printf("Movimento da Rainha:\n");
    moverRainha(movimentosRainha);

    printf("\n");

    // ---------------- CAVALO ----------------
    moverCavalo();
}