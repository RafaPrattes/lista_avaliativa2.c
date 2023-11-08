#include <stdio.h>

int main() {
    int vetor[10];
    int tamanho = 10;

    for (int i = 0; i < tamanho; i++) {
        scanf("%i", &vetor[i]);
    }
        for (int i = 0; i < tamanho - 1; i++) {
            printf("%d ", vetor[i]);
        }
        printf("%d\n", vetor[tamanho-1]);
    while (tamanho > 1) {
        for (int i = 0; i < tamanho - 1; i++) {
            vetor[i] = vetor[i] + vetor[i + 1];
        }
        tamanho--;

        for (int i = 0; i < tamanho - 1; i++) {
            printf("%d ", vetor[i]);
        }
        printf("%d\n", vetor[tamanho-1]);
    }
    return 0;
}