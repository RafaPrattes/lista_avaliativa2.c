#include <stdio.h>

void print_matrix(int matrix[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[4][4];
    int matrizB[4][4];
    int resultado[4][4];
    int i;
    int j;
    char operacao[5];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    scanf("%s", operacao);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (operacao[0] == 's') {
                resultado[i][j] = matrizA[i][j] + matrizB[i][j];
            } else if (operacao[0] == 'sub') {
                resultado[i][j] = matrizA[i][j] - matrizB[i][j];
            } else if (operacao[0] == 'm') {
                resultado[i][j] = matrizA[i][j] * matrizB[i][j];
            }
        }
    }
        printf("%4d", resultado[i][j]);
        printf("\n");

print_matrix("resultado");
    return 0;
}