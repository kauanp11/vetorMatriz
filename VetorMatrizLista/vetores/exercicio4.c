#include <stdio.h>

int main() {
    int vetor[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            count++;
        }
    }

    printf("Quantidade de valores pares: %d\n", count);

    return 0;
}
