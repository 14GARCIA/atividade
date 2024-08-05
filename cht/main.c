#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void coletarDados(int quantidade, char nomes[][100], int idades[]) {
    int i; // Declare a variável 'i' aqui
    for (i = 0; i < quantidade; i++) {
        printf("\nDigite seu nome:\n");
        scanf("%s", nomes[i]);
        
        printf("\n%s, digite sua idade:\n", nomes[i]);
        scanf("%d", &idades[i]);
    }
}

void calcularSomaEMedia(int quantidade, int idades[], int *soma, float *media) {
    int i; // Declare a variável 'i' aqui
    *soma = 0;
    for (i = 0; i < quantidade; i++) {
        *soma += idades[i];
    }
    *media = (float) *soma / quantidade;
}

void exibirAcimaDaMedia(int quantidade, char nomes[][100], int idades[], float media) {
    int i; // Declare a variável 'i' aqui
    printf("\nPessoas com a idade acima da média:\n");
    for (i = 0; i < quantidade; i++) {
        if (idades[i] > media) {
            printf("%s, tem a idade maior do que a média\n", nomes[i]);
        }
    }
}

void categorizarEExibirIdades(int quantidade, char nomes[][100], int idades[], char maiores[][100], char menores[][100], int *count_maiores, int *count_menores) {
    int i; // Declare a variável 'i' aqui
    *count_maiores = 0;
    *count_menores = 0;
    
    for (i = 0; i < quantidade; i++) {
        if (idades[i] >= 18) {
            strcpy(maiores[*count_maiores], nomes[i]);
            (*count_maiores)++;
        } else {
            strcpy(menores[*count_menores], nomes[i]);
            (*count_menores)++;
        }
    }
    
    printf("\nVeja quem e maior de idade:\n");
    for (i = 0; i < *count_maiores; i++) {
        printf("%s\n", maiores[i]);
    }
    
    printf("\nVeja quem e menor de idade:\n");
    for (i = 0; i < *count_menores; i++) {
        printf("%s\n", menores[i]);
    }
}

int main() {
    int quantidade = 10;
    char nome[quantidade][100];
    int idade[quantidade];
    int soma;
    float media;
    char maiores[quantidade][100];
    char menores[quantidade][100];
    int count_maiores, count_menores;

    coletarDados(quantidade, nome, idade);
    calcularSomaEMedia(quantidade, idade, &soma, &media);
    
    printf("A soma das idades foi igual a: %d; e a media foi igual a: %.2f.\n", soma, media);
    
    exibirAcimaDaMedia(quantidade, nome, idade, media);
    
    categorizarEExibirIdades(quantidade, nome, idade, maiores, menores, &count_maiores, &count_menores);

    return 0;
}

