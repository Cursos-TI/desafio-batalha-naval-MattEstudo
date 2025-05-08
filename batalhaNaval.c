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

