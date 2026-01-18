#include <stdio.h>

int main() {

  
    int tabuleiro5[5][5] = {0};

    
    for (int j = 1; j <= 3; j++) {
        tabuleiro5[1][j] = 3;
        printf("Navio horizontal em: (1, %d)\n", j);
    }

    // Navio vertical (coluna 3)
    for (int i = 2; i <= 4; i++) {
        tabuleiro5[i][3] = 3;
        printf("Navio vertical em: (%d, 3)\n", i);
    }

    
    int tabuleiro10[10][10] = {0};

    
    for (int j = 2; j <= 5; j++)
        tabuleiro10[2][j] = 3;

 
    for (int i = 4; i <= 7; i++)
        tabuleiro10[i][1] = 3;

    
    for (int i = 0; i < 4; i++)
        tabuleiro10[i][i] = 3;

    
    for (int i = 0; i < 4; i++)
        tabuleiro10[i][9 - i] = 3;

    printf("\nTabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro10[i][j]);
        }
        printf("\n");
    }



    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    
    for (int i = 0; i < 5; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            if (j >= 0 && j < 5)
                cone[i][j] = 1;
        }
    }

    
    for (int i = 0; i < 5; i++) {
        cruz[2][i] = 1;
        cruz[i][2] = 1;
    }

   
    for (int i = 0; i < 5; i++) {
        int dist = i <= 2 ? i : 4 - i;
        for (int j = 2 - dist; j <= 2 + dist; j++) {
            octaedro[i][j] = 1;
        }
    }

    // Exibição das habilidades
    printf("\nHabilidade em Cone:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", cone[i][j]);
        printf("\n");
    }

    printf("\nHabilidade em Cruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", cruz[i][j]);
        printf("\n");
    }

    printf("\nHabilidade em Octaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", octaedro[i][j]);
        printf("\n");
    }

    return 0;
}
