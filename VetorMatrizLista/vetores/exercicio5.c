#include <stdio.h>

int main() {
    float vetor[10];
    int negativos = 0;
    float somaPositivos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            negativos++;
        } else if (vetor[i] > 0) {
            somaPositivos += vetor[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}
