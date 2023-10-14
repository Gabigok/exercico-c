#include <stdio.h>

void calcularParcela(float valorCompra, int numeroParcelas) {
    
    float valorParcela = valorCompra / numeroParcelas;

    
    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Numero de parcelas: %d\n", numeroParcelas);
    printf("Valor da parcela a prazo: R$ %.2f\n", valorParcela);
}

int main() {
    
    float valorCompra = 3530.8;
    int numeroParcelas = 14;

    calcularParcela(valorCompra, numeroParcelas);

    return 0;
}
