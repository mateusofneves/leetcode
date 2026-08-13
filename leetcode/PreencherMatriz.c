#include <stdio.h>

int main(void) {
    
    int lista [4][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int numero = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            lista[i][j] = numero;
            numero += 1;
        }
    }

    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            printf("%d ", lista[linha][coluna]);
    }

    printf("\n");
}

    return 0;
}
