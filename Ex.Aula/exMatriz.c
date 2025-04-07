#include <stdio.h>

/*Ex fácil 01 - Matriz 2x2*/
/*
int main() {
    int matriz[2][2];

    printf("Digite os 4 valores da matriz 2x2:\n");
    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 2; j++) { 
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibição da matriz linha por linha
    printf("\nMatriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*Ex Intermediário 02 - matriz 3x3 com soma, média e diagonal*/
/*
int main() {
    int matriz[3][3];
    int soma = 0; 
    float media;

    printf("Digite os 9 valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    media = soma / 9.0;

    // Resultados
    printf("\nSoma dos elementos: %d", soma);
    printf("\nMédia dos elementos: %.2f", media);

    // Exibe os elementos da diagonal principal
    printf("\nDiagonal principal: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }

    printf("\n");
    return 0;
}
*/

/*Ex avançado 03 - Presença e falta de alunos*/
/*
int main() {
    char presencas[4][5];

    // Leitura dos dados de presença
    printf("Digite P (presente) ou F (falta) para 4 alunos em 5 dias:\n");

    for (int i = 0; i < 4; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < 5; j++) { 
            printf("  Dia %d: ", j + 1);
            scanf(" %c", &presencas[i][j]);
        }
    }

    printf("\nTabela de Presenças:\n");
    printf("         D1 D2 D3 D4 D5\n");
    for (int i = 0; i < 4; i++) {
        printf("Aluno %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf(" %c ", presencas[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*Ex avançado 04 - Jogo da velha*/
/*
void exibirTabuleiro(char tabuleiro[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---+---+---\n");
    }
    printf("\n");
}

int main() {
    char tabuleiro[3][3];
    int linha, coluna, jogadas = 0;
    char jogador = 'X';

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';

    while (jogadas < 9) {
        exibirTabuleiro(tabuleiro);

        printf("Jogador %c, informe linha e coluna (0-2): ", jogador);
        scanf("%d %d", &linha, &coluna);

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
            printf("Posição inválida. Tente novamente.\n");
            continue;
        }

        if (tabuleiro[linha][coluna] != ' ') {
            printf("Essa posição já está ocupada. Tente outra.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;
        jogadas++;


        jogador = (jogador == 'X') ? 'O' : 'X';
    }

    exibirTabuleiro(tabuleiro);
    printf("Fim do jogo!\n");

    return 0;
}
*/

/*Ex avançado 05 - Nédias por aluno e por matéria*/
/*
// Função para exibir o tabuleiro
void exibirTabuleiro(char tabuleiro[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---+---+---\n");
    }
    printf("\n");
}

// Função para verificar se um jogador venceu
int verificarVencedor(char tabuleiro[3][3], char jogador) {
    // Verifica linhas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogador &&
            tabuleiro[i][1] == jogador &&
            tabuleiro[i][2] == jogador) {
            return 1;
        }
    }

    // Verifica colunas
    for (int j = 0; j < 3; j++) {
        if (tabuleiro[0][j] == jogador &&
            tabuleiro[1][j] == jogador &&
            tabuleiro[2][j] == jogador) {
            return 1;
        }
    }

    // Verifica diagonais
    if ((tabuleiro[0][0] == jogador &&
         tabuleiro[1][1] == jogador &&
         tabuleiro[2][2] == jogador) ||

        (tabuleiro[0][2] == jogador &&
         tabuleiro[1][1] == jogador &&
         tabuleiro[2][0] == jogador)) {
        return 1;
    }

    return 0;
}

int main() {
    char tabuleiro[3][3];
    int linha, coluna, jogadas = 0;
    char jogador = 'X';

    // Inicializa o tabuleiro
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';

    // Loop principal do jogo
    while (jogadas < 9) {
        exibirTabuleiro(tabuleiro);

        printf("Jogador %c, informe linha e coluna (0-2): ", jogador);
        scanf("%d %d", &linha, &coluna);

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
            printf("Posição inválida. Tente novamente.\n");
            continue;
        }

        if (tabuleiro[linha][coluna] != ' ') {
            printf("Essa posição já está ocupada. Tente outra.\n");
            continue;
        }

        // Marca a jogada
        tabuleiro[linha][coluna] = jogador;
        jogadas++;

        // Verifica se venceu
        if (verificarVencedor(tabuleiro, jogador)) {
            exibirTabuleiro(tabuleiro);
            printf("Jogador %c venceu!\n", jogador);
            break;
        }

        // Troca jogador
        jogador = (jogador == 'X') ? 'O' : 'X';
    }

    // Empate
    if (jogadas == 9) {
        exibirTabuleiro(tabuleiro);
        printf("Empate! Ninguém venceu.\n");
    }

    return 0;
}
*/