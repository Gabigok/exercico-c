#include <stdio.h>

char lerSexo() {
    char sexo;
    printf("Digite o sexo (M/F): ");
    
    while (1) {
        scanf(" %c", &sexo); 
        
     
        if (sexo == 'M' || sexo == 'F') {
            return sexo;
        } else {
            printf("Valor inválido. Digite M ou F: ");
        }
    }
}

int main() {
    char sexo = lerSexo();
    printf("Sexo digitado: %c\n", sexo);
    
    return 0;
}
