#include <stdio.h>
#include <string.h>

void soletrarFrase(const char *frase) {
    int comprimento = strlen(frase);

    for (int i = 0; i < comprimento; i++) {
        printf("%c-", frase[i]);
    }

    printf("\n");
}

int main() {
    char frase[100];  
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

   
    int comprimento = strlen(frase);
    if (comprimento > 0 && frase[comprimento - 1] == '\n') {
        frase[comprimento - 1] = '\0';
    }

    soletrarFrase(frase);

    return 0;
}
