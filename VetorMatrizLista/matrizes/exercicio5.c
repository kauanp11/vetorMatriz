#include <stdio.h>

int main()
{
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int soma;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i != j && (i+j) != 4)
            {
                soma+=matriz[i][j];
            }
        }
    }
    
    printf("\nSoma dos elemetos que não fazem parte é: %d", soma);

    return 0;
}