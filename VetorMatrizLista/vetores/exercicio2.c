#include <stdio.h>

int main() {
    int valores[5];
    int soma = 0;
    float media;

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    media = soma / 5.0;

    printf("\nValores digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }

    printf("\nMedia dos valores: %.2f", media);

    return 0;
}

