#include <stdio.h>

void multiplicarVetorPorEscalar(float vetor[], int tamanho, float escalar) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] *= escalar;
    }
}

void imprimirVetor(float vetor[], int tamanho) {
    printf("Resultado: [");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vetor[tamanho];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    float escalar;
    printf("Digite o escalar: ");
    scanf("%f", &escalar);
  
    multiplicarVetorPorEscalar(vetor, tamanho, escalar);

    imprimirVetor(vetor, tamanho);

    return 0;
}
