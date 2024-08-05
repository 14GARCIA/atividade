#include <stdio.h>
#include <stdlib.h>

int main() {
    int cod[6] = {123, 253, 455, 500, 645, 784}; 
    int tamanho = sizeof(cod) / sizeof(cod[0]);
    int valor;
    int encontrado = 0;
    int i; 

    printf("Digite o código procurado: ");
    scanf("%d", &valor);

    for (i = 0; i < tamanho; i++) {
        if (cod[i] == valor) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("O código %d foi encontrado\n", valor);
    } else {
        printf("O código %d não foi encontrado\n", valor);
    }

    return 0;
}

