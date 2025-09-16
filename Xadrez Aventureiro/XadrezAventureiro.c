#include <stdio.h> 

int main() {
    // Quantidade de movimento do Cavalo
    int movimentosBaixo = 2; // O Cavalo deve andar duas casas para baixo
    int movimentosEsquerda = 1; // Depois uma casa para a esquerda

    int i = 0; // Contador para o loop externo

    // Linha em branco para separar dos movimentos anteriores
    printf("\n");

    // Loop externo (for) controla os movimentos "Baixo"
    for (i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
}

    // Loop interno (whilw) controla o movimento "Esquerda"
    int j = 0; 
    while (j < movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0; 
}