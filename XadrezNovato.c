#include <stdio.h>

int main() {
    // -------------------------------
    // Definição de constantes
    // -------------------------------
    const int movimentosTorre = 5;   // Torre anda 5 casas para a direita
    const int movimentosBispo = 5;   // Bispo anda 5 casas na diagonal superior direita
    const int movimentosRainha = 8;  // Rainha anda 8 casas para a esquerda

    // -------------------------------
    // Movimento da TORRE (usando FOR)
    // -------------------------------
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    // Linha em branco para separar movimentos
    printf("\n");

    // -------------------------------
    // Movimento do BISPO (usando WHILE)
    // O bispo anda na diagonal: cada passo equivale a "Cima" + "Direita"
    // -------------------------------
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < movimentosBispo) {
        printf("Cima\n");
        printf("Direita\n");
        j++;
    }

    // Linha em branco para separar movimentos
    printf("\n");

    // -------------------------------
    // Movimento da RAINHA (usando DO-WHILE)
    // A Rainha anda em todas as direções, aqui: 8 casas para a esquerda
    // -------------------------------
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < movimentosRainha);

    return 0;
}
