#include <stdio.h>

#define TAMANHO 10 // Definindo o tamanho máximo do vetor

int main() {
    int vetor [TAMANHO]; // Declarando um vetor de inteiros com espaço para 10 elementos
    int n = 0; // Variável que guarda quantos elementos já inserimos (inicialmente vazio)

    // Inserindo valores
    vetor[n++] = 10; // Inserimos 10 na posição e incrementamos n
    vetor[n++] = 20; // Inserimos 20 na posição e incrementamos n
    vetor[n++] = 30; // Inserimos 30 na posição e incrementamos n

    printf("Elementos do vetor:\n"); // Mensagem para indentificar os dados que serão exibidos
    for(int i = 0; i < n; i++){      // Laço para percorrer os elementos já inseridos
        printf("Posição %d: %d\n", i, vetor[i]); // Exibe a posição e o valor correspondete
    }

    return 0;
}