#include <stdio.h>
#include <ctype.h>

// Função para exibir o tabuleiro
void exibir_tabuleiro(int tab[5][5]) {
    printf("   0  1  2  3  4\n");
    printf("  ---------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%c | ", 'A' + i);
        for (int j = 0; j < 5; j++) {
            printf("%d  ", tab[i][j]);
        }
        printf("|\n");
    }
    printf("  ---------------\n");
}

// Função para colocar uma peça (3) em uma posição
void colocar_peca(int tab[5][5], char linha_letra, int coluna) {
    // Converter letra da linha para índice (A=0, B=1, ..., E=4)
    int linha = toupper(linha_letra) - 'A';
    
    // Verificar se a posição é válida
    if (linha >= 0 && linha < 5 && coluna >= 0 && coluna < 5) {
        tab[linha][coluna] = 3;
    } else {
        printf("Posição inválida: (%c, %d)\n", linha_letra, coluna);
    }
}
int main() {
    // Criar tabuleiro 5x5 inicializado com 0s
    int tabuleiro[5][5] = {0};

    // Posições fornecidas: (A,0), (A,1), (A,2), (C,4), (D,4), (E,4)
    struct {
        char linha;
        int coluna;
    } posicoes[] = {{'A', 0}, {'A', 1}, {'A', 2}, {'C', 4}, {'D', 4}, {'E', 4}};
    
    // Colocar as peças nas posições especificadas
    for (int i = 0; i < 6; i++) {
        colocar_peca(tabuleiro, posicoes[i].linha, posicoes[i].coluna);
    }

    // Exibir o tabuleiro final
    printf("Tabuleiro 5x5 com peças (3) e espaços vazios (0):\n");
    exibir_tabuleiro(tabuleiro);

    return 0;
}