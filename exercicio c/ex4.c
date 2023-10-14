#include <stdio.h>

int main() {
    
    const int linhas = 7;
    const int colunas = 5;
    
    float matriz[linhas][colunas];

    printf("Digite os elementos da matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Terceira coluna:\n");
    for (int i = 0; i < linhas; i++) {
        printf("%.2f\n", matriz[i][2]);
    }

    return 0;
}
